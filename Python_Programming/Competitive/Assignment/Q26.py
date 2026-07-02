# program which accept one number and checks whether it is perfect number or not.

def main():

    No = int(input("Enter number is:"))

    Sum = 0
    for i in range(1,(No//2)+1):
        if(No % i == 0):
            Sum = Sum + i

    if(Sum == No):
        print("perfect number")
    else:
        print("not perfect number")

if __name__=="__main__":
    main()