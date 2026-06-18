//Write a program to print all numbers from 1 to N that are divible by both 2 and 3.
class Logic
{
    void printDivisibleBy2and3(int num)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if((iCnt % 2 == 0)&&(iCnt % 3 == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
}
class Q105
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}