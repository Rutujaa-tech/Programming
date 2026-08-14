import pandas as pd

Datapath = "student_performance_ml.csv"

df = pd.read_csv(Datapath)

print("Average StudyHours :",df["StudyHours"].mean())

print("Average Attendance:",df["Attendance"].mean())

print("Maximum PreviousScore:",df["PreviousScore"].max())

print("Minimum SleepHours:",df["SleepHours"].min())