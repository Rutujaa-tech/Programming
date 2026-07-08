# A program which accept one number for user and check whether number is prime or not.

def main():
    No = int(input("Enter a number: "))

    if No <= 1:
        print("Not Prime")
        return

    for i in range(2, No):
        if No % i == 0:
            print("Not Prime")
            return

    print(" it is Prime")

if __name__ == "__main__":
    main()