//factor

import java.util.Scanner;

class NumberX           //business logic
{
    public void SumFactors(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)  
        {      
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        System.out.println("Summetion of factors :"+iSum);
    }
    
}
public class program48
{
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
                           

        System.out.println("enter number:");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();  

        nobj.SumFactors(iValue);  
         
    }
}

//Time Complexity : o(N/2)
//where N>= 0