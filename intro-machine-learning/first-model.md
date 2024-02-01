# First Machine Learning Model

## choosing variables/columns

```python
import pandas as pd

melbourne_file_path = '../input/melbourne-housing-snapshot/melb_data.csv'
melbourne_data = pd.read_csv(melbourne_file_path) 
melbourne_data.columns
```

```python
# The Melbourne data has some missing values (some houses for which some variables weren't recorded.)
# We'll learn to handle missing values in a later tutorial.  
# Your Iowa data doesn't have missing values in the columns you use. 
# So we will take the simplest option for now, and drop houses from our data. 
# Don't worry about this much for now, though the code is:

# dropna drops missing values (think of na as "not available")
melbourne_data = melbourne_data.dropna(axis=0)
```

## selecting the prediction target
- its possible pull a variable with `dot-notation` (is a convention of programming languages, especially in object-oriented languages, that allows you to access members (methods and attributes) of an object using a period '.').

- dot-notation to select the column we want to predict, which is called the `prediction target`.
- by convention the prediction target is called `y`.

```python
y = melbourne_data.Price
```

## choosing "features
- `features` = The columns that are inputted into our model (and later used to make predictions).

```python
melbourne_features = ['Rooms', 'Bathroom', 'Landsize', 'Lattitude', 'Longtitude']

# By convention, this data is called X.
X = melbourne_data[melbourne_features]
X.describe()
```

## building a model
- `scikit-learn`: Library to create models

The steps to building and using a model are:

- Define: What type of model will it be? A decision tree? Some other type of model? Some other parameters of the model type are specified too.
- Fit: Capture patterns from provided data. This is the heart of modeling.
- Predict: Just what it sounds like.
- Evaluate: Determine how accurate the model's predictions are.

#### example
```python
from sklearn.tree import DecisionTreeRegressor

# Define model. Specify a number for random_state to ensure same results each run
melbourne_model = DecisionTreeRegressor(random_state=1)

# Fit model
melbourne_model.fit(X, y)
```

- Specifying a number for random_state ensures you get the same results in each run. This is considered a good practice. 

```python
# predict
print("Making predictions for the following 5 houses:")
print(X.head())
print("The predictions are")
print(melbourne_model.predict(X.head()))
```