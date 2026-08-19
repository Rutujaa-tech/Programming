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

# Total column
df['Total'] = (
    df['Math']+
    df['Science']+
    df['English'] 
        
    )

print(df)

# Normalize the Math scores using Min-Max scaling

scaler = MinMaxScaler()

df['Math_Normalize'] = scaler.fit_transform(
    df[['Math']]
)

# Q2 : create Gender column and perforn One Hot Encoding
df['Gender'] = ['Male','Male','Female']

print("Gender Column :")
print(df)

# One Hot Encoding:

df = pd.get_dummies(
    df,
    columns= ['Gender']
)
print("\nAfter One Hot Encoding")
print(df)

# Q3 : Group students by gender and calculate average marks

data ={
    'Name': ['Amit', 'Sagar', 'Pooja'],
    'Math': [85, 90, 78],
    'Science': [92, 88, 80],
    'English': [75, 85, 82],
    'Gender': ['Male', 'Male', 'Female']
}

df_gender = pd.DataFrame(data)

print("\nQ3 : Average Marks by Gender")

result = df_gender.groupby('Gender')[
    ['Math','Science','English']
].mean()

print(result)