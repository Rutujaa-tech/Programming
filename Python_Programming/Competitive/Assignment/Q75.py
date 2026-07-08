# A program which accept N numbers from user and store it into List. return addition of all prime numbersfrom that list. main python files accepts N numbers from user and pass each number to ChkPrime() function which is part of our user defined module named as MarvellousNum.Name of the function main python file should be ListPrime()

import MarvellousNum

def ListPrime(Brr):
    Sum = 0

    for i in Brr:
        if MarvellousNum.ChkPrime(i):
            Sum = Sum + i

    return Sum


def main():
    Size = int(input("Enter number of elements: "))

    Arr = []

    print("Enter the elements:")

    for i in range(Size):
        No = int(input())
        Arr.append(No)

    Ans = ListPrime(Arr)

    print("Addition of prime numbers is:", Ans)


if __name__ == "__main__":
    main()