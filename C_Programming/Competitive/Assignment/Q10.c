//Accept number from user and check whether is even or odd

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    int iRemainder = 0;

    iRemainder = iNo % 2;

    if(iRemainder==0)
{
    printf("number is even\n");
}

else
{
    printf("number is odd\n");
}

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("enter number:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    return 0;
}