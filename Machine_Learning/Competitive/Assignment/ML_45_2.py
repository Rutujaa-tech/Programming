import pandas as pd
import matplotlib.pyplot as plt

from sklearn.preprocessing import MinMaxScaler

data = {
    'Name': ['Amit', 'Sagar', 'Pooja'],
    'Math': [85, 90, 78],
    'Science': [92, 88, 80],
    'English': [75, 85, 82]
}

df = pd.DataFrame(data)

# Total columns
df['Total'] = (
    df['Math']+
    df['Science']+
    df['English']
)

print(df)

# Q1 : Noarmalize Math scores using Min-max Scaling

scaler = MinMaxScaler()

df['Math_Normalized'] = scaler.fit_transform(
    df[['Math']]
)

print("\nQ1 : Normalized math Scores")
print(df)

# Q2 : create Gender column and perforn One Hot Encoding

df['Gender'] = ['Male','Male','Female']

print("\nQ2 : Gender column")
print(df)

# One-Hot encoding

df = pd.get_dummies(
    df,
    columns=['Gender']
)

print("\nAfter One Hot Encoding:")
print(df)
