import java.util.*;
public class program36
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;

        System.out.println("enter your name:");
        sName = sobj.nextLine();

        System.out.println("enter your age:");
        iAge = sobj.nextInt();

        System.out.println("enter your marks:");
        fMarks = sobj.nextFloat();

        System.out.println("name:" +sName);
        System.out.println("age: "+iAge);
        System.out.println("marks: "
        +fMarks);

    }
}