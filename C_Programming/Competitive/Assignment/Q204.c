// Count Number Greater than X
// count element greater than given number.
// int CountGreater(PNODE first , int X)

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node  NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void Display(PNODE first)
{
    while(first != NULL)
    {
        printf(" | %d | ->",first->data);
        first = first -> next;
    }
    printf("NULL\n");
}

void InsertFirst(PPNODE first,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    newn->next = *first;
    *first = newn;
}

int CountGreater(PNODE first, int X)
{
    int iCount = 0;

    while(first != NULL)
    {
        if(first->data > X)
        {
            iCount++;
        }

        first = first->next;
    }

    return iCount;
}

int main()
{
    PNODE head = NULL;
    
    InsertFirst(&head,11);
    InsertFirst(&head,20);
    InsertFirst(&head,21);
    InsertFirst(&head,40);
    InsertFirst(&head,30);


    int iRet = 0;

    
    Display(head);

    iRet = CountGreater(head, 21);

    printf("Number of elements greater than is : %d\n", iRet);



    return 0;
}

