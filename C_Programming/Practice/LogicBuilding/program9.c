

#include<stdio.h>

float AddTwoNumbers (
                        float fNo1 ,            //first input
                        float fNo2             //second input
                    )
{
    float fAns = 0.0f;                          //variable to store result
    fAns = fNo1 + fNo2;                         //perform Addition
    return fAns;

}


int main()
{
    
    float fValue1 = 0.0f;                       //To store first input
    float fValue2 = 0.0f;                       //To store second input
    float fResult = 0.0f;                       //To store the result




    printf("enter first number:\n");
    scanf("%f",&fValue1);

    printf("enter second number:\n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1 , fValue2);        
    printf("addition is : %f\n",fResult);
    
    return 0;

}