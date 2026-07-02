#program which accept one number and prints factorial of that numbers

def main():

    No = int(input("Enter number is:"))
    fact = 1

    for i in range(1,No+1):
        fact = fact * i
    print("factorial is:",fact)

if __name__ == "__main__":
    main()