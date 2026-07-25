// DoublyCL in CPP

#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

#pragma pack(1)
class DoublyCL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;

    public:
        DoublyCL();         //constructor

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyCL :: DoublyCL()
{
    cout<<"Inside constructor\n";
    
    first = NULL;
    last = NULL;
    iCount = 0;
}

void DoublyCL :: Display()
{
    PNODE temp = NULL;
    if(this -> first == NULL && this -> last == NULL)
    {
        return;
    }

    temp = this-> first;
    cout<<"<=>";
    do
    {
        cout<<" | "<<temp -> data<<"| <=>";
        temp = temp -> next;
    }while(this -> last->next != temp);

    cout<<"\n";
}

int DoublyCL :: Count()
{
    return iCount;
}

void DoublyCL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;
    
     newn = new NODE;
    newn-> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;    

    if(this -> first == NULL && this -> last == NULL)
    {
        this -> first = newn;
        this -> last = newn;
    }

    else
    {
       newn -> next = this -> first;
       this -> first ->prev = newn;
       this -> first = newn;
    }
       this -> last -> next = this -> first;
       this -> first-> prev = this -> last;

       this->iCount++;
}

void DoublyCL :: InsertLast(int iNo)
{
   PNODE newn = NULL;

   newn = new NODE;
   newn -> data = iNo;
   newn -> next = NULL;
   newn -> prev = NULL;

   if(this -> first == NULL && this -> last == NULL)
   {
     this ->first = newn;
     this -> last = newn;
   }

   else
   {
    this -> last -> next = newn;
    newn -> prev = this -> last;
    this -> last = newn;
   }
   this -> last-> next = this-> first;
   this -> first-> prev = this -> last;

   this -> iCount++;

}

void DoublyCL :: InsertAtPos(int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int i = 0;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }

    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }

    else
    {
        newn = new NODE;
        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = this -> first;
        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;
        
        this -> iCount++;
    }

}

void DoublyCL :: DeleteFirst()
{
    PNODE temp = NULL;
    if(this -> first == NULL && this -> last == NULL)
    {
        return;
    }

    else if(this -> first == this -> last)
    {
        delete this-> first;
        this -> first = NULL;
        this -> last = NULL;
    }

    else
    {
        temp = this -> first;
        first = first->next;
        delete temp;

        this -> last -> next = this -> first;
        this -> first -> prev = this -> last;
       
    }
    this -> iCount--;
}

void DoublyCL :: DeleteLast()
{

    if(this -> first == NULL && this -> last == NULL)
    {
        return;
    }

    else if(this -> first == this -> last)
    {
        delete this-> first;
        this -> first = NULL;
        this -> last = NULL;
    }

    else
    {
       this -> last = this -> last ->prev;
       delete this -> last -> next;

        this -> last -> next = this -> first;
        this -> first -> prev = this -> last;

    }
    this -> iCount--;


}

void DoublyCL :: DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    PNODE target = NULL;
    int i = 0;

   if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }

    else if(iPos == iCount)
    {
        DeleteLast();
    }

    else
    {
    temp = this -> first;

    for(i = 1; i < iPos - 1; i++)
    {
        temp = temp -> next;
    }

    target = temp -> next;

    temp -> next = target -> next;
    target->next-> prev = temp;
    delete target;

    this -> last -> next = this -> first;
    this -> first -> prev = this -> last;

    this -> iCount--;
    }
}

int main()
{
    int iRet = 0;
    DoublyCL dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(111);
    dobj.InsertLast(121);
    dobj.InsertLast(151);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    dobj.DeleteFirst();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    dobj.DeleteLast();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    dobj.InsertAtPos(105,4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    dobj.DeleteAtPos(4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}