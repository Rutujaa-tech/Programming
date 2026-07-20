// Singly CL

class node
{
    public int data;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }

}

class SinglyCL
{
    private node first;
    private node last;
    private int iCount;

    public SinglyCL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    public void Display()
    {
        node temp = null;

        if(first == null && last == null)
        {
            return;
        }

        temp = first;
        do 
        {
            System.out.print("| "+temp.data+" | ->");
            temp = temp.next;
        }while(last.next != temp);

        System.out.println(" ");
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }

        else
        {
            newn.next = first;
            first = newn;
        }
        last.next = first;
        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }

        else
        {
            last.next = newn;
            last = newn;
        }
        last.next = first;
        iCount++;
    }
    
    public void InsertAtPos(int iNo,int iPos)
    {
        node newn = new node(iNo);

        node temp = null;
        int i = 0;

        if(iPos < 1 || iPos > iCount + 1)
        {
            System.out.println("Invalid position");
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
            temp = first;

            for(i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;

            iCount++;

        }
    }

    public void DeleteFirst()
    {
        if(first == null && last == null)
        {
            return;
        }
        else if(first == last)
        {
            first = null;
            last = null;
        }

        else
        {
          first = first.next;
          last.next = first;
        }

        iCount--;
    }

    public void DeleteLast()
    {
        node temp = null;
        if(first == null && last == null)
        {
            return;
        }
        else if(first == last)
        {
            first = null;
            last = null;
        }

        else
        {
            temp = first;

            while(temp.next != last)
            {
                temp = temp.next;
            }
            last = temp;

            last.next = first;
        }
        iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        node temp = null;
        node target = null;
        int i = 0;

        if(iPos < 1 || iPos > iCount)
        {
            System.out.println("Invalid position");
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
            temp = first;

            for(i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }
            target = temp.next;
            temp.next = target.next;

            last.next = first;

            iCount--;
        }

    }

}
class SinglyCLprogram458
{
    public static void main(String A[])
    {
        int iRet = 0;
        SinglyCL sobj = new SinglyCL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.InsertAtPos(105,4);
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.DeleteFirst();
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.DeleteLast();
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.DeleteAtPos(4);
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);
    }
}