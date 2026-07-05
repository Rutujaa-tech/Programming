# a lambda function using filter() which accepts a list of numbers and returns a list of a numberrs divisible by both 3 and 5.

CheckDivisible = lambda No: (No % 3 == 0) and (No % 5 == 0)

def main():
    Size = int(input("Enter number of elements : "))

    Data = []

    print("Enter the elements :")
    for i in range(Size):
        No = int(input())
        Data.append(No)

    print("Input data is :", Data)

    # Functional Programming using filter()
    FData = list(filter(CheckDivisible, Data))

    print("Numbers divisible by both 3 and 5 are :", FData)

if __name__ == "__main__":
    main()