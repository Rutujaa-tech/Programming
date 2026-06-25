//program which accept string from user and copy small character of that string into another string.

#include<stdio.h>

void strCpySmall(char *str,char *dest)
{
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
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

    strCpySmall(Arr,Brr);

    printf("%s",Brr);

    return 0;
}