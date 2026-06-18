//Accept number from user and return diffrence between summesion of even digit and summesion of odd digit.

#include<stdio.h>
int CountDiff(int iNo)
{
   int iDigit = 0;
   int iEvensum = 0;
   int iOddSum = 0;

   while(iNo > 0)
   {
    iDigit = iNo % 10;

    if(iDigit % 2 == 0)
    {
        iEvensum = iEvensum + iDigit;
    }
    else
    {
        iOddSum = iOddSum + iDigit;
    }
    iNo = iNo / 10;
   }
   return (iEvensum - iOddSum);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);
    
    return 0;
}