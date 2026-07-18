class Circle:
    PI = 3.14

    def __init__(self):
        self.Radius = 0.0
        self.Area = 0.0
        self.Circumferance = 0.0

    def Accept(self):
        self.Radius = float(input("Enter the radius:"))

    def CalculationArea(self):
        self.Area = Circle.PI * self.Radius * self.Radius

    def CalculateCircumference(self):
        self.Circumference = 2 * Circle.PI * self.Radius

    def Display(self):
        print("Radius:",self.Radius)
        print("Area:",self.Area)
        print("Circumference:",self.Circumference)

print("--------------Circle 1----------------") 


Obj1 = Circle()

Obj1.Accept()
Obj1.CalculationArea()
Obj1.CalculateCircumference()
Obj1.Display()

print("--------------Circle 2----------------") 


Obj2 = Circle()

Obj2.Accept()
Obj2.CalculationArea()
Obj2.CalculateCircumference()
Obj1.Display()



