#program which accept one number and prints multiplication table of that number.

def main():
    print("enter number:")
    No = int(input())

    for i in range(1,11):
        mult = No * i
        print(mult)



if __name__ == "__main__":
    main()