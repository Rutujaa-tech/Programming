//program to accept string from user and copy the content of that string into another string(Implement strcpy()function)
#include<stdio.h>

void StrCpyX(char *str,char *dest)
{
    while(*str != '\0')
    {
        *dest = *str;
        str++;
        dest++;

    } 
        *dest = '\0';
}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];       //empty string

    StrCpyX(Arr,Brr);

    printf("%s",Brr);

    return 0;
}