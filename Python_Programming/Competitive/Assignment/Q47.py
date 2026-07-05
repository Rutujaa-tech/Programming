# a lambda function using reduce() which accepts a list of numbers and returns the product of all elements.

from functools import reduce

Product = lambda No1, No2: No1 * No2

def main():
    Size = int(input("Enter number of elements : "))

    Data = []

    print("Enter the elements :")
    for i in range(Size):
        No = int(input())
        Data.append(No)

    print("Input data is :", Data)

    # Functional Programming using reduce()
    RData = reduce(Product, Data)

    print("Product of all elements is :", RData)

if __name__ == "__main__":
    main()