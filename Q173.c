// program which accept string from user and copy capital character of that string into another string.

#include<stdio.h>

void strCpyCap(char *str,char *dest)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];       //empty string

    strCpyCap(Arr,Brr);

    printf("%s",Brr);

    return 0;
}