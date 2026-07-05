# a lambda function using filter() which accept a list of numbers and returns the count of even numbers.

CheckEven = lambda No: (No % 2 == 0)

def main():
    Size = int(input("Enter number of elements : "))

    Data = []

    print("Enter the elements :")
    for i in range(Size):
        No = int(input())
        Data.append(No)

    print("Input data is :", Data)

    # Functional Programming using filter()
    FData = list(filter(CheckEven, Data))

    Count = len(FData)

    print("Even numbers are :", FData)
    print("Count of even numbers is :", Count)

if __name__ == "__main__":
    main()