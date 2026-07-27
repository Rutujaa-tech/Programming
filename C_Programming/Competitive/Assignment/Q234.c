#include<stdio.h>

int Min(int iNo)
{
    static int iMin = 9;
    int iDigit = 0;
    static int i = 1;

    if(i <= iNo)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;

        Min(iNo);
    }

    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("Minimum number is %d:",iRet);

    return 0;
}