# Model Validation

- In most (though not all) applications, the relevant measure of model quality is predictive accuracy. <br> In other words, will the model's predictions be close to what actually happens.
- There are many metrics for summarizing model quality, but we'll start with one called `Mean Absolute Error` (also called MAE).
- error = actual − predicted

## Mean Absolute Error (MAE)
- 1st We take the absolute value of each error. 
- 2nd We then take the average of those absolute errors.
- This is our measure of model quality.

```python
from sklearn.metrics import mean_absolute_error

predicted_home_prices = melbourne_model.predict(X)
mean_absolute_error(y, predicted_home_prices)
```
## Coding - Validation Data
Breaking up the data into different pieces: train test split and MAE split:

- `train_test_split` = training data to fit the model.
- `mean_absolute_error` = validation data to calculate MAE.

```python
from sklearn.model_selection import train_test_split
# split data into training and validation data, for both features and target
# The split is based on a random number generator. Supplying a numeric value to
# the random_state argument guarantees we get the same split every time we
# run this script.
train_X, val_X, train_y, val_y = train_test_split(X, y, random_state = 0)
# Define model
melbourne_model = DecisionTreeRegressor()
# Fit model
melbourne_model.fit(train_X, train_y)

# get predicted prices on validation data
val_predictions = melbourne_model.predict(val_X)
print(mean_absolute_error(val_y, val_predictions))
```

### Comparing top few validation predictions and top few actual prices


```python
# validation predictions
print('validation predictions: ', val_predictions[:5])
# actual 
print('actual: ', val_y.head().tolist())
```

_Note: val_predictions[:5] print the index 0 to the index 4 of a list called 'val_predictions'_

### Why validation predictions differ from in-sample (or training) predictions? 

- Models may learn patterns from the training data that do not necessarily generalize well to unseen data. 