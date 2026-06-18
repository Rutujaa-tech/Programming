//Write a program to check whether a number is a perfect number or not.

class Logic{
    void checkPerfect(int num)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (num / 2); iCnt++)
        {
            if(num % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(num == iSum)
        {
            System.out.println("Number is perfect");
        }
        else
        {
            System.out.println("Number is not perfect");    
        }
    }
}

class Q98
{
   public static void main (String A[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
    
}