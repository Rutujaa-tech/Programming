#include<stdio.h>

int Mult(int iNo)
{
    static int iMult = 1;
    int iDigit = 0;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
        
        Mult(iNo);
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d",iRet);

    return 0;
}