//1 Accept number from user and display below pattern

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}
int main()
{
    int ivalue = 0;

    printf("enter number of elements:");
    scanf(" %d",&ivalue);

    Pattern(ivalue);
    return 0;
}