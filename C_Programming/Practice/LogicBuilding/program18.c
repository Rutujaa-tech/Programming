//scenario based que park ticket price calculation per age
#include<stdio.h>

int CalculateTickitPrice(int iAge)
{
    if(iAge >= 0 && iAge <= 5)
    {
        return 0;                   //0 is free
    }

    else if(iAge >= 6 && iAge <= 18)
    {
        return 500;
    }
    else if(iAge >= 19 && iAge <= 50)
    {
        return 900;
    }
    else
    {
        return 400;
    }

}
    

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("please enter your age to calculate ticket prices:");
    scanf("%d",&iValue);

    iRet = CalculateTickitPrice(iValue);

    printf("your ticket price will be %d ruppes",iRet);


    
    return 0;

}
