//Write a program to calculate the power of a number using loops.

class Logic
{
    void calculatePower(int base , int exp)
    {
        int iCnt = 0;
        int iResult = 1;

        for(iCnt = 1; iCnt <= exp; iCnt++)
        {
            iResult = iResult * base;
        }
         System.out.println("iResult = " +iResult);
    }
}

class Q95
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2 , 5);
    }
}
