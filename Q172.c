//if third parameter is greater than the size of source string then copy whole string into destination.

#include<stdio.h>

void StrNCpyX(char *str, char *dest, int iCnt)
{
    while((*str != '\0')&&(iCnt != 0))
    {
        *dest = *str;
        *str++;
        *dest++;
        iCnt--;
    }
    *dest ='\0';
}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];       //empty string
    StrNCpyX(Arr,Brr,10);

    printf("%s",Brr);       //Marvellous

    return 0;
}