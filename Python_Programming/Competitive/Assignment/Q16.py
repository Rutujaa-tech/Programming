# program which accept one number and prints sum of digit.

def main():

    No = int(input("Enter number is:"))
    sum = 0
    
    while(No > 0):
        Digit = No % 10
        sum = sum + Digit
        No = No // 10

    print(sum)


if __name__ == "__main__":
    main()