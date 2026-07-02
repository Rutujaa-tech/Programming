# program which accepts marks and display grade.

def main():

    Marks = int(input("Enter Marks is:"))

    if(Marks >= 75):
        print("Distinction")

    elif(Marks >= 60):
        print("First Class")

    elif(Marks >= 50):
        print("Second class")

    elif(Marks >= 0):
        print("Fail")

    else:
        print("Invalid marks")



if __name__ == "__main__":
    main()