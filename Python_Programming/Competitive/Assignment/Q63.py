# program which accept one number from user and return addition of its factors.

def main():
    No = int(input("Enter a number: "))
    Sum = 0

    for i in range(1, No + 1):
        if (No % i == 0):
            Sum = Sum + i

    print("Sum of factors =", Sum)

if __name__ == "__main__":
    main()