// Doubly LL

class node
{
    public int data;
    public node next;
    public node prev;

    node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLL
{
    private node first;
    private int iCount;

    public DoublyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {
        node temp = null;
        temp = first;

        System.out.print("null <=>");
        while(temp != null)
        {
            System.out.print("| "+temp.data+"|<=>");
            temp = temp.next;
        }
        System.out.println("null");

    }

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }

        else
        {
            newn.next = first;                          
            first.prev = newn;
            first = newn;
            
        }
        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);
        node temp = null;

        if(first == null)
        {
            first = newn;
        }

        else
        {
            temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp;
        }
        iCount++;

    }

    public void InsertAtPos(int iNo, int iPos)
    {
        node newn = new node(iNo);
        node temp = null;
        int i = 0;

        if((iPos < 1)||(iPos > iCount + 1))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(iNo);
        }

        else if( iPos == iCount + 1)
        {
            InsertLast(iNo);
        }

        else
        {
            temp = first;

            for(i = 1; i < iPos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev = temp;

            iCount++;
        }
    }

    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }

        else if(first.next == null)
        {
            first = null;
        }

        else
        {
            first = first.next;
            first.prev = null;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        node temp = null;

        if(first == null)
        {
            return;
        }

        else if(first.next == null)
        {
            first = null;
        }

        else
        {
            temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }

    iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        node temp = null;
        node target = null;
        int i = 0;

        if((iPos < 1)||(iPos > iCount))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }

        else if( iPos == iCount)
        {
            DeleteLast();
        }

        else
        {
            temp = first;

           for(i = 1; i < iPos-1; i++)
            {
                temp = temp.next;
            }
            target = temp.next;
            temp.next = target.next;
            target.next.prev = temp;

            iCount--;
            
        }

    }
} 

class DoublyLLprogram459
{
    public static void main(String A[])
    {
        int iRet = 0;
        DoublyLL dobj = new DoublyLL();

        dobj.InsertFirst(51);
        dobj.InsertFirst(21);
        dobj.InsertFirst(11);

        dobj.InsertLast(101);
        dobj.InsertLast(111);
        dobj.InsertLast(121);

        dobj.Display();

        iRet = dobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        dobj.InsertAtPos(105,4);
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        dobj.DeleteFirst();
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        dobj.DeleteLast();
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        dobj.DeleteAtPos(4);
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of nodes are : "+iRet);
    }
}