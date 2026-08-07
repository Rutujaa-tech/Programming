import pandas as pd

Datapath = "student_performance_ml.csv"
df = pd.read_csv(Datapath)

print("Total student :",len(df))

print("Passed student :",(df["FinalResult"] == 1).sum())

print("Failed student :",(df["FinalResult"] == 0).sum())