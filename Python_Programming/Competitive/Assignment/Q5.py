import pandas as pd

df = pd.read_csv("student_performance_ml.csv")

print(df.groupby("FinalResult")["StudyHours"].mean())
print(df.groupby("FinalResult")["Attendance"].mean())

# Observation
"""
1.Students with FinalResult = 1 (Pass) have higher average StudyHours compared to students with FinalResult = 0 (Fail).
2.Students who study for more hours have a higher chance of passing.
3.Pass students have higher average Attendance than fail students.
4.Higher Attendance improves the FinalResult of students.
5.Overall, StudyHours and Attendance have a positive impact on student performance.

"""