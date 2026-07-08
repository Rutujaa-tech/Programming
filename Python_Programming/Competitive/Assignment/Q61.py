# A program which accept one number and display pattern.

'''
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
'''

def Pattern(No):
    for i in range(No):
        for j in range(No):
            print("*",end=" ")
        print()

def main():
    Value = int(input("Enter number:"))

    Pattern(Value)

if __name__ == "__main__":
    main()