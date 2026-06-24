//problems on nunbers 
//divisible by 3 and 5
//type 1
import java.util.Scanner;
public class program39
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("enter number:");
        iValue = sobj.nextInt();

        if((iValue % 3 == 0) && (iValue % 5 ==0))
        {
            System.out.println("number is divisible by 3 & 5");
        }
        else
        {
            System.out.println("number is not divisible by3 & 5 ");
        }
        
    }
}