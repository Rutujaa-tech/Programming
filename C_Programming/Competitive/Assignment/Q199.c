//Count Frequency of given number
//int frequency(PNODE first, int iNo);

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

int CountFrequency(PNODE first,int iNo)
{
    int iCount = 0;

    while(first != NULL)
    {
        if(first -> data == iNo)
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
    InsertFirst(&head,20);
    InsertFirst(&head,30);

    Display(head);

    iRet = CountFrequency(head,20);

    printf("Frequency of 20 is : %d\n", iRet);



    return 0;
}

