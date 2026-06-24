//divisible by 3 and 5
//type 2

import java.util.Scanner;
public class program40 
{
    void CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 ==0))
        {
            System.out.println("number is divisible by 3 & 5");
        }
        else
        {
            System.out.println("number is not divisible by3 & 5 ");
        }

    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("enter number:");
        iValue = sobj.nextInt();

        CheckDivisible(iValue);                 //error

        
        
    }
}