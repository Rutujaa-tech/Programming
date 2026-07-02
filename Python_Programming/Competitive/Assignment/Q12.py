# program which accept one number and prints all even numbers till that number

def main():

    No = int(input("Enter number is:"))

    
    for i in range(1,No + 1):
        if(i % 2 == 0):
            print(i)


if __name__ == "__main__":
    main()