//program which accept one number from user and count number of ON(1) bit in it without using % and / operator.

#include<stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    UINT iCount = 0;
    UINT iMask = 0x1; 

    while(iMask != 0)
    {
        if(iNo & iMask)
        {
            iCount++;
        }

        iMask = iMask << 1;
    }

    return iCount;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("Number of 1's are :%u",iRet);

    return 0;
}