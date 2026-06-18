//Write a program to find the largest digit in a given number.

class Logic
{
    void findLargestDigit(int num)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iMax = 0;

        while(num > 0)
        {
            iDigit = num % 10;

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }

            num = num / 10;
        }
    System.out.println("Largest Digit is : " + iMax);

    }
}

class Q99
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}