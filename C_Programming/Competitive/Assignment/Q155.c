#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Decimal : %d\n",ch);
        printf("Octal : 0%o\n",ch);
        printf("Hexadecimal : 0X%X\n",ch);
    }

}
int main()
{
    char cValue = '\0';

     printf("Enter the character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}