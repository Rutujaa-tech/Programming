/*

Algorithm

    START
        Accept first number as no1
        Accept second number as no2
        Perform additon of no1 & no2
        Display the result


    STOP
*/


#include<stdio.h>

int main()
{
     float i,j,k;

    printf("enter first number:\n");
    scanf("%f",&i);

    printf("enter second number:\n");
    scanf("%f",&j);

    k = i + j;  //business logic

    printf("addition is : %f\n",k);
    
    return 0;

}