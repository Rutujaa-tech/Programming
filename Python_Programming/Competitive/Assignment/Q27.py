# program which accept one number and prints binary eqivalent.

def main():

    No = int(input("Enter number is:"))
    Binary = ""

    while No > 0:
        Digit = No % 2
        Binary = str(Digit) + Binary
        No = No // 2

    print("Binary equivalent is:", Binary)

if __name__=="__main__":
    main()