# Introduction

## Splitting the database for validation and prediction

- train_X: These are the characteristics used to train the model.
- val_X: These are the characteristics used to validate the model.
- train_y: These are the targets corresponding to the training data.
- val_y: These are the targets corresponding to the validation data.

```python
import pandas as pd
from sklearn.model_selection import train_test_split

# Read the data
X_full = pd.read_csv('../input/train.csv', index_col='Id')
X_test_full = pd.read_csv('../input/test.csv', index_col='Id')

# Obtain target and predictors
y = X_full.SalePrice
features = ['LotArea', 'YearBuilt', '1stFlrSF', '2ndFlrSF', 'FullBath', 'BedroomAbvGr', 'TotRmsAbvGrd']
X = X_full[features].copy()
X_test = X_test_full[features].copy()

# Break off validation set from training data
X_train, X_valid, y_train, y_valid = train_test_split(X, y, train_size=0.8, test_size=0.2, random_state=0)
```

In the documentation `train_test_split` it says "Slipt arrays or matrices into random train and test subsets". 

And the paramethers:

```python
sklearn.model_selection.train_test_split(*arrays, test_size=None, train_size=None, random_state=None, shuffle=True, stratify=None)
```

- ***arrays**: Lists, numpy arrays, scipy-sparse matrices or pandas dataframes. inputs.

- **stratify**: If not None, data is split in a stratified fashion, using this as the class labels.

- **test_size**: If float, should be between 0.0 and 1.0 and represent the proportion of the dataset to include in the test split.

- **train_size**: If float, should be between 0.0 and 1.0 and represent the proportion of the dataset to include in the train split.

- **random_state**: Controls the shuffling applied to the data before applying the split.

- **shuffle**: Whether or not to shuffle the data before splitting. If shuffle = False then stratify must be None.


```python
X_train.head()
```

## Five different random forest models
```python
from sklearn.ensemble import RandomForestRegressor

# Define the models
model_1 = RandomForestRegressor(n_estimators=50, random_state=0)
model_2 = RandomForestRegressor(n_estimators=100, random_state=0)
model_3 = RandomForestRegressor(n_estimators=100, criterion='absolute_error', random_state=0)
model_4 = RandomForestRegressor(n_estimators=200, min_samples_split=20, random_state=0)
model_5 = RandomForestRegressor(n_estimators=100, max_depth=7, random_state=0)

models = [model_1, model_2, model_3, model_4, model_5]
```

**Notes**

- `n_estimators`: The number of trees in the forest.
- `min_samples_split`: The minimum number of samples required to split an internal node.
- `max_depth`: The maximum depth of the tree. If None, then nodes are expanded until all leaves are pure or until all leaves contain less than min_samples_split samples.
- `criterion`: The function to measure the quality of a split. It can be “squared_error”, “absolute_error”, “friedman_mse” or “poisson” and default=”squared_error”.

To select the best model out five (model_1, model_2, ..., model_5), we define a function score_model() below

## score_model(): Retuns the mean absolute error (MAE) form the validation set

```python
from sklearn.metrics import mean_absolute_error

# Function for comparing different models
def score_model(model, X_t=X_train, X_v=X_valid, y_t=y_train, y_v=y_valid):
    model.fit(X_t, y_t)
    preds = model.predict(X_v)
    return mean_absolute_error(y_v, preds)

for i in range(0, len(models)):
    mae = score_model(models[i])
    print("Model %d MAE: %d" % (i+1, mae))
```

### Exercises

- Step 1: Evaluate several models
```python
# Fill in the best model
best_model = model_3
```

- Step 2: Generate test predictions

```python
# Define a model
my_model = best_model 

# Fit the model to the training data
my_model.fit(X, y)

# Generate test predictions
preds_test = my_model.predict(X_test)

# Save predictions in format used for competition scoring
output = pd.DataFrame({'Id': X_test.index,
                       'SalePrice': preds_test})
output.to_csv('submission.csv', index=False)
```


