//Accept N numbers from user and return difference between summession of even elements and summession of odd elements.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int icnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(icnt = 0; icnt < iLength; icnt++)
    {
        if(Arr[icnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[icnt];
        }
        else
        {
            iOddSum = iOddSum +Arr[icnt];

        }
        
    }
    return (iEvenSum - iOddSum);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter numberr of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize); 

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}
