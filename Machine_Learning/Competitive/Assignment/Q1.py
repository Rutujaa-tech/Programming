import pandas as pd

Datapath = "student_performance_ml.csv"

df = pd.read_csv(Datapath)
print("Data loaded succesfully.")

print("----First 5 Records----")
print(df.head())

print("----Last 5 Records----")
print(df.tail())

print("shape of dataset :")
print(df.shape)

print("Coloumns Name :",list(df.columns))

print("---Data Type of Each Column----")
print(df.dtypes)



