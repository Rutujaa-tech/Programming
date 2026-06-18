//Accept number of rows and number of coloumns from user and display below pattern.
//input : iRow = 4      iCol = 4
// Output : 2 4 6 8 10
//          1 3 5 7 9
//          2 4 6 8 10
//          1 3 5 7 9


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
   
    for(i = 1; i <= iRow; i++)
    {
        int iEven = 2;
        int iOdd = 1;

    for(j = 1; j <= iCol; j++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t",iEven);
            iEven = iEven + 2;
        }
        else
        {
            printf("%d\t",iOdd);
            iOdd = iOdd + 2;
        }

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