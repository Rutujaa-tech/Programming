class BankAccount:
    ROI = 10.5

    def __init__(self,Name,Amount):
        self.Name = Name
        self.Amount = Amount

    def Deposit(self,Value):
        self.Amount = self.Amount + Value
        print("Amount Deposit Sucessfully")

    def Withdraw(self,Value):
        if Value > self.Amount:
            print("Insufficient Balance")

        else:
            self.Amount = self.Amount - Value
            print("Amount withdraw Successfully.")

    def CalculateInterest(self):
        Interest = (self.Amount * BankAccount.ROI)/100
        return Interest
    
    def Display(self):
        print("\n-----Account Details-----")
        print("Name:",self.Name)
        print("Balance:",self.Amount)
        print("Rate of Interest:",BankAccount.ROI,"%")
        print("Interest:",self.CalculateInterest())

def main():

    Obj1 = BankAccount("Rutuja",10000)

    Obj1.Display()

    Obj1.Deposit(5000)
    Obj1.Display()

    Obj1.Withdraw(3000)
    Obj1.Display()


if __name__ == "__main__":
    main()



    
    
        