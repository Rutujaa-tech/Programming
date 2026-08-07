import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("student_performance_ml.csv")

plt.boxplot(df["Attendance"])

plt.title("Attendence Boxplot")

plt.show()