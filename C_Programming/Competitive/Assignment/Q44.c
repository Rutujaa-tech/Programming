//Accept number from user and return multiplication of all digit.

#include<stdio.h>
int MultDigit(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
         
    }
   
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("%d",iRet);
    
    return 0;
}