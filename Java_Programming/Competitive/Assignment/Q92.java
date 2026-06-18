//Write a program to display the grade of a student based on marks.

class Logic 
{
    void displayGrade(int marks)
    {
        if((marks >= 90)&&(marks <= 100))
        {
            System.out.println("Grade : A+");
        }
        else if(marks > 80)
        {
             System.out.println("Grade : A");
        }
        else if(marks > 70)
        {
             System.out.println("Grade : B");
        }
        else if(marks > 60)
        {
             System.out.println("Grade : C");
        }
        else if(marks > 50)
        {
             System.out.println("Grade : D");
        }
        else
        {
            System.out.println("fail");
        }
    }
}

class Q92
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}