//Write a program to display all factors of given a number.
class Logic
{
    void DisplayFactors(int num)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= (num/2); iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}
class Q103
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.DisplayFactors(12);
    }
}