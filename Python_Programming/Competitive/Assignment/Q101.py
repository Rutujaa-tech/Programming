class Demo:
    Value = 10

    def __init__(self,A,B):
        self.No1 = A
        self.No2 = B

    def fun(self):
        print("Value of No1 :",self.No1)
        print("Value of No2 :",self.No2)

    def gun(self):
        print("Value of No1 :",self.No1)
        print("Value of No2 :",self.No2)

Obj1 = Demo(11,21)
Obj2 = Demo(51,101)

Obj1.fun()
Obj2.fun()

Obj1.gun()
Obj2.gun()

    
        






