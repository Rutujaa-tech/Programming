# A program which contains one function that accept one number from user ans returns true number is divisible by 5 otherwise return false.

def Chkdivisible(no):
    if no % 5 == 0:
        return True
    else:
        return False
def main():

    Value = int(input("Enter a number: "))

    if Chkdivisible(Value):
        print("Number is divisible by 5")
    else:
        print("Number is Not divisible by 5")

if __name__ == "__main__":
    main()