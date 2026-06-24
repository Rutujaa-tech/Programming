//divisible by 3 and 5
//type 2

import java.util.Scanner;
public class program43
{
    public static boolean CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 ==0))
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;                   //false internally 0 ahe

        System.out.println("enter number:");
        iValue = sobj.nextInt();

        bRet = CheckDivisible(iValue);  

        if(bRet== true)
        {
            System.out.println("number is divisible by 3 and 5");
        }               

        else
        {
              System.out.println("number is not divisible by 3 and 5");

        }

        
        
    }
}