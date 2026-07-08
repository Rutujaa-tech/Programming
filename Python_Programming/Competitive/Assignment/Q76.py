# A program which contains one lambda function which accepts one parameter and return power of two.

def main():
    Power = lambda No: No ** 2

    Value = int(input("Enter number: "))

    Ans = Power(Value)

    print("Power of two is:", Ans)


if __name__ == "__main__":
    main()