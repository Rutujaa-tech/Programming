//Accept on number from user if number is less than 10 then print "hello" otherwise print "demo".  

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}