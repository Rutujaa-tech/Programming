# A program which accept number from user and return addition of digits in that number.

def SumDigits(No):
    Sum = 0

    while (No > 0):
        Digit = No % 10
        Sum = Sum + Digit
        No = No // 10

    return Sum

def main():
    Value = int(input("Enter number: "))
    Ans = SumDigits(Value)

    print("Addition of digits is:", Ans)

if __name__ == "__main__":
    main()