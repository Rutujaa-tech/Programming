# program which accepts one number and check whether it is palindrome or not.


def main():

    No = int(input("Enter number is:"))
    Temp = No
    Rev = 0
    
    while(No > 0):
        Digit = No % 10
        Rev = (Rev * 10) + Digit
        No = No // 10

    if(Temp == Rev):
        print("number is Palindrome")

    else:
        print("number is not palindrome")


if __name__ == "__main__":
    main()