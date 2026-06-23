#include<stdio.h>

void Display(char ch)
{
   if(ch >= 'A' && ch <= 'Z')
   {
    char i = ch;
     for(i = ch; i <= 'Z'; i++)
     {
        printf("%c\t",i);
     }
   }
   else if(ch >= 'a' && ch <= 'z')
   {
    char i = ch;
     for(i = ch; i >='a'; i--)
     {
        printf("%c\t",i);
     }
   }

   else
   {
    return;
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