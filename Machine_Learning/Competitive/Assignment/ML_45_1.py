import pandas as pd
import matplotlib.pyplot as plt

from sklearn.preprocessing import MinMaxScaler

data = {
    'Name' : ['Amit','sagar','pooja'],
    'Math' : [85,90,78],
    'Science' : [92,88,80],
    'English' : [75,85,82]
}

df = pd.DataFrame(data)

# Total column
df['Total'] = (
    df['Math']+
    df['Science']+
    df['English']
)

print(df)

# Q1: Normalize Math Scores using Min-Max Scaling

scaler = MinMaxScaler()

df['Math_Normalized'] = scaler.fit_transform(
    df[['Math']]
)

print("\nQ1: Normalize Math Scores")
print(df)

