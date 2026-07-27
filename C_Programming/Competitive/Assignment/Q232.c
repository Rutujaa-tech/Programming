#include<stdio.h>

int Max(int iNo)
{
    static int iMax = 0;
    int iDigit = 0;
    static int i = 1;

    if(i <= iNo)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;

        Max(iNo);
    }

    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("Maximum number is %d:",iRet);

    return 0;
}