//program which accept 2 string from user and concat second string after first string.(implement strcat()function).


#include<stdio.h>

void strCatX(char *str,char *dest)
{
    while(*str != '\0')
    {
        str++;
        
    }
    *str = ' ';
    str++;

    while(*dest != '\0')
    {
        *str = *dest;
        str++;
        dest++;
    }
    *str = '\0';
}
int main()
{
    char Arr[50] = "Marvellous Infosystem";
    char Brr[30] = "Logic Building";

    strCatX(Arr,Brr);

    printf("%s", Arr);

    return 0;
}