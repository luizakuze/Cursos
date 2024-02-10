# Basic Data Exploration

- The first step in any machine learning project is familiarize yourself with the data.

- Data scientists use ``Pandas`` library for exploring data.

```python
import pandas as pd
```

```python
# save filepath to variable for easier access
melbourne_file_path = '../input/melbourne-housing-snapshot/melb_data.csv'
# read the data and store data in DataFrame titled melbourne_data
melbourne_data = pd.read_csv(melbourne_file_path) 
# print a summary of the data in Melbourne data
melbourne_data.describe()
```