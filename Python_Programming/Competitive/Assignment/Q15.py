# program which accept one number and prints count of digit in that number.

def main():

    No = int(input("Enter number is:"))
    count = 0
    
    while(No > 0):
        count = count + 1
        No = No // 10

    print(count)


if __name__ == "__main__":
    main()