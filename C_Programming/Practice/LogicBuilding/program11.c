/*
START
    Accept number as No
    If No is Completely Divisible by 2
        then print Even
    otherwise
        print odd

STOP

START
    Accept number as No
    Divide No by 2
    If remainder is 0
        then print as Even
    Otherwise
        print as Odd

STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("enter number:\n");
    scanf("%d",&iValue);
    
    iRemainder = iValue % 2;

    if(iRemainder==0)
{
    printf("number is even\n");
}

else
{
    printf("number is odd\n");
}


    return 0;

}
