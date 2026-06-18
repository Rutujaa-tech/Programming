//write a program to print each digit of a number sepratly.

class Logic
{
    void printDigits(int num)
    {
        int iDigit = 0;
        
        while(num > 0)
        {
            iDigit = num % 10;
            System.out.println(iDigit);
            num = num / 10;
        }
    }
}
class Q94
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}