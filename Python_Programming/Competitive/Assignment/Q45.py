# A lambda function using reduce() which accepts a list of numbers and returns minimum element.

from functools import reduce

Minimum = lambda No1, No2: No1 if No1 < No2 else No2

def main():
    Size = int(input("Enter number of elements : "))

    Data = []

    print("Enter the elements :")
    for i in range(Size):
        No = int(input())
        Data.append(No)

    print("Input data is :", Data)

    RData = reduce(Minimum, Data)

    print("Minimum element is :", RData)

if __name__ == "__main__":
    main()