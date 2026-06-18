// write a program which accept one number from user and print that number of even number on screen.
#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    
    int iCnt = 0;
    
    //logic
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%d ",iCnt*2);
    }
}
 int main()
 {
   int iValue = 0;

    printf("enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
 }
