//Accept number of rows and number of coloumns from user and display below pattern.
//input : iRow = 4      iCol = 4
// Output : 1 2 3 4
//          5 6 7 8 
//          9 10 11 12


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCount = 1;
  

    for(i = 1; i <= iRow; i++)
    {
    for(j = 1; j <= iCol; j++)
    {
        printf("%d\t",iCount);
        iCount++;
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