# Underfitting and Overfitting

## Experimenting With Different Models
- Now with a realibre way to measure model accuracy, we can experiment wt another models and see which gives the best predictions.

- `tree's depth` = is a measure of how many splits it makes before coming to a prediction. .

## Overfitting - many groups

- When we split the data between many leaves in DecisionTreeRegressor , we also have less data in each leaf.

- Leaves with very few datas will make predictions that are quite close to the actual values ​​of that data, but may make unreliable predictions for new data (because each prediction is based on only a few data points).

- **Concept**: Where model matches the training data almost perfectly, but does poorly in validation and other new data.

## Underfitting - few groups

- **Concept**: When a model fails to capture important distinctions and patterns in the data, so it performs poorly even in training data.

- At an extreme, if a tree divides data into only 2 or 4.

## How to control the tree depth?

- Many allow for some routes through the tree to have greater depth than other routes. 
- `max_leaf_nodes argument` = sensible way to control overfitting vs underfitting.


remembering what's required first:

```python
# Data Loading Code Runs At This Point
import pandas as pd
    
# Load data
melbourne_file_path = '../input/melbourne-housing-snapshot/melb_data.csv'
melbourne_data = pd.read_csv(melbourne_file_path) 
# Filter rows with missing values
filtered_melbourne_data = melbourne_data.dropna(axis=0)
# Choose target and features
y = filtered_melbourne_data.Price
melbourne_features = ['Rooms', 'Bathroom', 'Landsize', 'BuildingArea', 
                        'YearBuilt', 'Lattitude', 'Longtitude']
X = filtered_melbourne_data[melbourne_features]

from sklearn.model_selection import train_test_split

# split data into training and validation data, for both features and target
train_X, val_X, train_y, val_y = train_test_split(X, y,random_state = 0)
```

### How to set the max_leaf_nodes in a function:

```python
from sklearn.metrics import mean_absolute_error
from sklearn.tree import DecisionTreeRegressor

def get_mae(max_leaf_nodes, train_X, val_X, train_y, val_y):
    model = DecisionTreeRegressor(max_leaf_nodes=max_leaf_nodes, random_state=0)
    model.fit(train_X, train_y)
    preds_val = model.predict(val_X)
    mae = mean_absolute_error(val_y, preds_val)
    return(mae)
```

### Compare MAE with differing values of max_leaf_nodes:

We can use a for-loop to compare the accuracy of models built with different values for max_leaf_nodes.

```python
for max_leaf_nodes in [5, 50, 500, 5000]:
    my_mae = get_mae(max_leaf_nodes, train_X, val_X, train_y, val_y)
    print("Max leaf nodes: %d  \t\t Mean Absolute Error:  %d" %(max_leaf_nodes, my_mae))
```

### Exercises

Step 1: Compare Different Tree Sizes
Write a loop that tries the following values for max_leaf_nodes from a set of possible values.
```python
# Define candidate_max_leaf_nodes
candidate_max_leaf_nodes = [5, 25, 50, 100, 250, 500]

# Initialize an empty dictionary to store the MAE scores for each max_leaf_nodes value
mae_scores = {}

# Write loop to find the ideal tree size from candidate_max_leaf_nodes
for max_leaf_nodes in candidate_max_leaf_nodes:
    my_mae = get_mae(max_leaf_nodes, train_X, val_X, train_y, val_y)
    mae_scores[max_leaf_nodes] = my_mae
    print(f'max leaf nodes {max_leaf_nodes} mean absolute error {my_mae}')

# Store the best value of max_leaf_nodes (it will be either 5, 25, 50, 100, 250, or 500)
best_tree_size = min(mae_scores, key=mae_scores.get)
```

Step 2: Fit Model Using All Data
You know the best tree size. If you were going to deploy this model in practice, you would make it even more accurate by using all of the data and keeping that tree size. That is, you don't need to hold out the validation data now that you've made all your modeling decisions.

```python
from sklearn.tree import DecisionTreeRegressor

# Use the best tree size found earlier
final_model = DecisionTreeRegressor(max_leaf_nodes=best_tree_size)

# Fit the final model using all of the data
final_model.fit(X, y)
```