# A program which accept number from user and return number of digits in that number.

def CountDigits(No):
    Count = 0

    while (No > 0):
        Count = Count + 1
        No = No // 10

    return Count

def main():
    Value = int(input("Enter number: "))
    Ans = CountDigits(Value)

    print("Number of digits is:", Ans)

if __name__ == "__main__":
    main()