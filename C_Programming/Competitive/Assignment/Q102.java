//Write a program to count how many even and odd numbers are present between a and N.

class Logic
{
    void countEvenOddRange(int n)
    {
        int iCnt = 0;
        int iEvenCount = 0;
        int iOddCount = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEvenCount++;
                
            }

            else
            {
                iOddCount++;
            }
        }
         System.out.println("Total odd number is :"+iEvenCount);
        System.out.println("Total even number is :"+iOddCount);
    }
}

class Q102
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}