//Write a program to find the smallest digit in a given number.

class Logic
{
    void findSmallestDigit(int num)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iMin = 9;

        while(num > 0)
        {
            iDigit = num % 10;

            if(iDigit < iMin)
            {
                iMin = iDigit;
            }

            num = num / 10;
        }
    System.out.println("Smallest Digit is : " + iMin);

    }
}

class Q100
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}