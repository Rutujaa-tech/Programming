class BookStore:
    NoOfBooks = 0

    def __init__(self,Name,Author):
        self.Name = Name
        self.Author = Author

        # Increment class variable whenever an object is created
        BookStore.NoOfBooks += 1

    def Display(self):
        print(f"{self.Name} by {self.Author}. No of Books : {BookStore.NoOfBooks}")

def main():

    Obj1 = BookStore("Linux System Programming", "Robert Love")
    Obj1.Display()

    Obj2 = BookStore("C Programming", "Dennis Ritchie")
    Obj2.Display()

    Obj3 = BookStore("Python Programming", "Guido van Rossum")
    Obj3.Display()



if __name__ == "__main__":
    main()