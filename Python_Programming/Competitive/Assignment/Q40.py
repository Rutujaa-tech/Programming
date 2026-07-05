# A lambda function using filter() which accepts a list of numbers and returns a list of even number.

CheckEven = lambda No: (No % 2 == 0)

def main():
    Size = int(input("Enter number of elements : "))

    Data = []

    print("Enter the elements :")
    for i in range(Size):
        No = int(input())
        Data.append(No)

    print("Input data is :", Data)

    FData = list(filter(CheckEven, Data))

    print("Even numbers are :", FData)

if __name__ == "__main__":
    main()