// Write a program to count total number of factors of a given number.


//Write a program to display all factors of given a number.
class Logic
{
    void CountFactors(int num)
    {
        int iCnt = 0;
        int iDigit = 0;
        for(iCnt = 1; iCnt <= (num/2); iCnt++)
        {
            iDigit = num % 10;
            if(iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
            num = num / 10;
        }
        System.out.println(iDigit);
    }
}
class Q104
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CountFactors(12);
    }
}