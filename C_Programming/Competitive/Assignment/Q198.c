// Count Even Numbers
//int CountEven(PNODE first)

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

int CountOdd(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        if(first -> data % 2 != 0)
        {
            iCount++;
        }
        first = first -> next;
    }
    return iCount;

}

void Display(PNODE first)
{
     while(first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first->next;
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

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,11);
    InsertFirst(&head,20);
    InsertFirst(&head,21);
    InsertFirst(&head,40);
    InsertFirst(&head,30);

    Display(head);

    iRet = CountOdd(head);

    printf("Odd numbers count is : %d\n", iRet);

    return 0;
}

