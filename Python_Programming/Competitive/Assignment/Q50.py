# A program which contains one function named as ChkNum() which accept one parameter as number. if number is even then it should display "Even number" otherwise display"Odd number" on console.

def ChkNum(No):
    if(No % 2 == 0):
        return True
    
    else:
        return False

def main():
    Value = int(input("Enter Number:"))

    Ret = ChkNum(Value)

    if(Ret == True):
        print("Even Number")

    else:
        print("Odd Number")

if __name__ == "__main__":
    main()