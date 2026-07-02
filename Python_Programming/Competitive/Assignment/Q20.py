# program which accepts one number and print its factor

def main():

    No = int(input("Enter number is:"))

    for i in range(1,No + 1):
        if(No % i == 0):
            print(i)

if __name__ == "__main__":
    main()