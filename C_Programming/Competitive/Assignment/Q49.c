//Accept temperature in Fahreheit and convert into celsius.(Fahreheit -32) *(5/9))

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius =0.0;

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("enter Temperature in Fahrenheit :");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %lf", dRet);

    return 0;
}