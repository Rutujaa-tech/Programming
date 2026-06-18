//Accept number of rows and number of coloumns from user and display below pattern.
//input : iRow = 4      iCol = 4
// Output : A A A A
//          B B B B
//          C C C C
//          D D D D


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1,ch = 'A'; i <= iRow; i++,ch++)
    {
    for(j = 1; j <= iCol; j++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}

}
int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf("enter number of row :");
    scanf("%d",&ivalue1);

    printf("enter number of coloumns:");
    scanf(" %d",&ivalue2);

    Pattern(ivalue1,ivalue2);
    
    return 0;
}