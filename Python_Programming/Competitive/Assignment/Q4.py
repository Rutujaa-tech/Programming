import pandas as pd

df = pd.read_csv("student_performance_ml.csv")

count = df["FinalResult"].value_counts()

print(count)

percentage = df["FinalResult"].value_counts(normalize=True) * 100

print("\npercentage:")
print("percentage")

pass_per = percentage[1]
fail_per = percentage[0]

print("\npass percentage:",round(pass_per,2),"%")
print("\nfail percentage:",round(fail_per,2),"%")

if abs(pass_per - fail_per) <= 10:
    print("\nDataset is balanced.")

else:
    print("\nDataset is not balanced.")