//Write a program to check whether a number is divisible by 5 and 11 or not.

class Logic
{
    void CheckDivisible(int num)
    {
        if((num % 5 == 0)&&(num % 11 == 0))
        {
            System.out.println("Number is Divisible 5 and 10");
        }
        else
        {
            System.out.println("Number is Not Divisible 5 and 10");
        }
    }
}


class Q93
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckDivisible(55);
    }
}