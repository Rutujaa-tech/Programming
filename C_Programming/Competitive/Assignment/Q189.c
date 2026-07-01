//program which accept one number and position from user and on that bit.Return modified number.

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iResult = 0;
    UINT iMask = 0x1;

    iMask = iMask << (iPos - 1);

    iResult = iMask ^ iNo;

    return iResult;

}

int main()
{
    UINT iValue = 0,iRet = 0, iLocation = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    printf("Enter Position:\n");
    scanf("%d",&iLocation);

    iRet = ToggleBit(iValue,iLocation);

    printf("modified number is %d ",iRet);

    return 0;
}