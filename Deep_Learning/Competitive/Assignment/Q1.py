# ============================================================
# Employee Attrition Prediction Deep Learning Project
# ============================================================
#
# ============================================================
# Deep Learning Pipeline
# ============================================================
# 1.  Read the data from CSV
# 2.  Data Analysis (EDA)
# 3.  Check Missing Values
# 4.  Identify Numerical and Categorical Features
# 5.  Convert Categorical Feature into Numerical
# 6.  Convert Target into 0 and 1
# 7.  Separate Independent and Dependent Variables
# 8.  Train Test Split
# 9.  Feature Scaling
# 10. MLP Model Training
# 11. Number of Iterations
# 12. Training Accuracy
# 13. Testing Accuracy
# 14. Confusion Matrix
# 15. Loss Curve
# 16. Create PredictAttrition() Function
# 17. Test using 5 New Employees
# 18. Overfitting / Underfitting Analysis
# ============================================================


import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import joblib

from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neural_network import MLPClassifier
from sklearn.metrics import accuracy_score, confusion_matrix, ConfusionMatrixDisplay


# ============================================================
# 1. Read the data from CSV
# ============================================================

print("\n1. Read the data from CSV")

data = pd.read_csv("Employee_Attrition.csv")

print("\nComplete Dataset : ")
print(data)


# ============================================================
# 2. Data Analysis (EDA)
# ============================================================

print("\n2. Data Analysis (EDA)")

print("\nFirst 5 rows : ")
print(data.head())

print("\nColumn names : ")
print(data.columns)

print("\nShape of dataset : ")
print(data.shape)

print("\nStatistical Summary : ")
print(data.describe())


# ============================================================
# 3. Check Missing Values
# ============================================================

print("\n3. Check Missing Values")

print(data.isnull().sum())


# ============================================================
# 4. Identify Numerical and Categorical Features
# ============================================================

print("\n4. Identify Numerical and Categorical Features")

numerical_features = [
    'Age',
    'MonthlyIncome',
    'YearsAtCompany',
    'TotalWorkingYears',
    'DistanceFromHome',
    'JobSatisfaction',
    'WorkLifeBalance',
    'NumCompaniesWorked',
    'TrainingTimesLastYear'
]

categorical_features = [
    'OverTime'
]

print("\nNumerical Features : ")
print(numerical_features)

print("\nCategorical Features : ")
print(categorical_features)


# ============================================================
# 5. Convert Categorical Feature into Numerical
# ============================================================

print("\n5. Convert Categorical Feature into Numerical")

# OverTime:
# No  --> 0
# Yes --> 1

data['OverTime'] = data['OverTime'].map({
    'No': 0,
    'Yes': 1
})

print("\nAfter converting OverTime : ")
print(data[['OverTime']].head())


# ============================================================
# 6. Convert Target Attrition into 0 and 1
# ============================================================

print("\n6. Convert Target Attrition into 0 and 1")

# Attrition:
# No  --> 0 --> Stay
# Yes --> 1 --> Leave

data['Attrition'] = data['Attrition'].map({
    'No': 0,
    'Yes': 1
})

print("\nAfter converting Attrition : ")
print(data['Attrition'].head())


# ============================================================
# 7. Separate Independent and Dependent Variables
# ============================================================

print("\n7. Separate Independent and Dependent Variables")

X = data[
    [
        'Age',
        'MonthlyIncome',
        'YearsAtCompany',
        'TotalWorkingYears',
        'DistanceFromHome',
        'JobSatisfaction',
        'WorkLifeBalance',
        'OverTime',
        'NumCompaniesWorked',
        'TrainingTimesLastYear'
    ]
]

Y = data['Attrition']


print("\nInput Features : ")
print(X.head())

print("\nTarget : ")
print(Y.head())


# ============================================================
# 8. Train Test Split
# ============================================================

print("\n8. Train Test Split")

X_train, X_test, Y_train, Y_test = train_test_split(
    X,
    Y,
    test_size=0.30,
    random_state=42,
    stratify=Y
)

print("\nTraining Input Shape : ", X_train.shape)
print("Testing Input Shape  : ", X_test.shape)

print("Training Output Shape : ", Y_train.shape)
print("Testing Output Shape  : ", Y_test.shape)


# ============================================================
# 9. Feature Scaling
# ============================================================

print("\n9. Feature Scaling")

scaler = StandardScaler()

X_train_scaled = scaler.fit_transform(X_train)
X_test_scaled = scaler.transform(X_test)

print("\nScaled Training Data : ")
print(X_train_scaled[:5])


# ============================================================
# 10. MLP / FNN Model Training
# ============================================================

print("\n10. MLP / FNN Model Training")

model = MLPClassifier(

    # 2 Hidden Layers
    # First Hidden Layer  = 8 neurons
    # Second Hidden Layer = 4 neurons

    hidden_layer_sizes=(8, 4),

    # ReLU activation function
    activation='relu',

    # Adam optimization algorithm
    solver='adam',

    # Maximum training iterations
    max_iter=1000,

    random_state=42
)

print("\nModel : ")
print(model)


print("\nTrain the Model")

model.fit(X_train_scaled, Y_train)

print("\nModel Training Completed")


# ============================================================
# 11. Number of Iterations Required
# ============================================================

print("\n11. Number of Iterations Required")

print("Number of Iterations : ", model.n_iter_)


# ============================================================
# 12. Training Accuracy
# ============================================================

print("\n12. Training Accuracy")

Y_train_pred = model.predict(X_train_scaled)

train_accuracy = accuracy_score(
    Y_train,
    Y_train_pred
)

print("Training Accuracy : ", train_accuracy)
print("Training Accuracy (%) : ", train_accuracy * 100)


# ============================================================
# 13. Testing Accuracy
# ============================================================

print("\n13. Testing Accuracy")

Y_pred = model.predict(X_test_scaled)

test_accuracy = accuracy_score(
    Y_test,
    Y_pred
)

print("Testing Accuracy : ", test_accuracy)
print("Testing Accuracy (%) : ", test_accuracy * 100)


# ============================================================
# 14. Confusion Matrix
# ============================================================

print("\n14. Confusion Matrix")

cm = confusion_matrix(
    Y_test,
    Y_pred
)

print("\nConfusion Matrix : ")
print(cm)


# Graphical Confusion Matrix

disp = ConfusionMatrixDisplay(
    confusion_matrix=cm,
    display_labels=['Stay', 'Leave']
)

disp.plot()

plt.title("Employee Attrition - Confusion Matrix")

plt.show()


# ============================================================
# 15. Loss Curve
# ============================================================

print("\n15. Loss Curve")

plt.plot(
    model.loss_curve_
)

plt.xlabel("Iterations")
plt.ylabel("Loss")

plt.title("MLP Training Loss Curve")

plt.show()


# ============================================================
# 16. PredictAttrition() Function
# ============================================================

print("\n16. Create PredictAttrition() Function")


def PredictAttrition(employee_data):

    # New employee data ला DataFrame मध्ये convert करणे

    employee = pd.DataFrame(
        [employee_data],
        columns=[
            'Age',
            'MonthlyIncome',
            'YearsAtCompany',
            'TotalWorkingYears',
            'DistanceFromHome',
            'JobSatisfaction',
            'WorkLifeBalance',
            'OverTime',
            'NumCompaniesWorked',
            'TrainingTimesLastYear'
        ]
    )

    # New employee ला same scaler ने scale करणे

    employee_scaled = scaler.transform(employee)

    # Prediction

    prediction = model.predict(employee_scaled)

    # Final Prediction

    if prediction[0] == 1:

        print("Prediction : Employee is likely to LEAVE")

    else:

        print("Prediction : Employee is likely to STAY")


# ============================================================
# 17. Test using 5 New Employee Records
# ============================================================

print("\n17. Test using 5 New Employee Records")


# ------------------------------------------------------------
# Employee 1
# ------------------------------------------------------------

employee_1 = [
    25,     # Age
    30000,  # MonthlyIncome
    1,      # YearsAtCompany
    3,      # TotalWorkingYears
    20,     # DistanceFromHome
    2,      # JobSatisfaction
    2,      # WorkLifeBalance
    1,      # OverTime
    3,      # NumCompaniesWorked
    2       # TrainingTimesLastYear
]

print("\n========== Employee 1 ==========")

PredictAttrition(employee_1)


# ------------------------------------------------------------
# Employee 2
# ------------------------------------------------------------

employee_2 = [
    35,
    70000,
    10,
    12,
    5,
    4,
    4,
    0,
    2,
    4
]

print("\n========== Employee 2 ==========")

PredictAttrition(employee_2)


# ------------------------------------------------------------
# Employee 3
# ------------------------------------------------------------

employee_3 = [
    28,
    40000,
    2,
    5,
    18,
    2,
    2,
    1,
    4,
    1
]

print("\n========== Employee 3 ==========")

PredictAttrition(employee_3)


# ------------------------------------------------------------
# Employee 4
# ------------------------------------------------------------

employee_4 = [
    42,
    85000,
    15,
    20,
    4,
    4,
    4,
    0,
    1,
    5
]

print("\n========== Employee 4 ==========")

PredictAttrition(employee_4)


# ------------------------------------------------------------
# Employee 5
# ------------------------------------------------------------

employee_5 = [
    30,
    50000,
    5,
    8,
    10,
    3,
    3,
    0,
    2,
    3
]

print("\n========== Employee 5 ==========")

PredictAttrition(employee_5)


# ============================================================
# 18. Overfitting / Underfitting Analysis
# ============================================================

print("\n18. Overfitting / Underfitting Analysis")

print("Training Accuracy : ", train_accuracy)
print("Testing Accuracy  : ", test_accuracy)


accuracy_difference = train_accuracy - test_accuracy


print("Accuracy Difference : ", accuracy_difference)


if train_accuracy > 0.95 and accuracy_difference > 0.10:

    print("\nResult : Model may be suffering from OVERFITTING")

elif train_accuracy < 0.70 and test_accuracy < 0.70:

    print("\nResult : Model may be suffering from UNDERFITTING")

else:

    print("\nResult : Model appears to have reasonable generalization")


# ============================================================
# END
# ============================================================

print("\n================================================")
print("Employee Attrition Prediction Project Completed")
print("================================================")