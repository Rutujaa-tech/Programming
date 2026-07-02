# program which accepts one number and prints reverce of that number.

def main():

    No = int(input("Enter number is:"))
    Rev = 0
    
    while(No > 0):
        Digit = No % 10
        Rev = (Rev * 10) + Digit
        No = No // 10

    print(Rev)


if __name__ == "__main__":
    main()