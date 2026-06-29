//prime number

import java.util.Scanner;

class NumberX           //business logic
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;
        boolean bFlag = true;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)  
        {      
            if((iNo % iCnt) == 0)
            {
                bFlag = false;
                break;
            }
            
        }

        return bFlag;
    
    }
    
}
public class program68
{
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;
                           

        System.out.println("enter number:");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();  

        bRet = nobj.CheckPrime(iValue);  

        if(bRet == true)
        {
            System.out.println("it is prime");
        }

        else
        {
             System.out.println("it is not prime");
        }
         
    }
}

//Time Complexity : o(N/2)
//where N>= 0 