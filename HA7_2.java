//Write a program which accept number from user and display it in reverse order.
//Input : 1234
//Output : 4321

import java.util.*;

class Number
{
    public boolean Check0(int iNo)
    {
        int iDigit = 0;
        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                return true;
            }
            iNo = iNo / 10;
        }
        return false;
    }
}

public class HA7_2 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a Number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        {
            boolean bRet = nobj.Check0(iValue);
            if (bRet == true)
            {
                System.out.println("YES 0 is present");
            }
            else
            {
                System.out.println("NO 0 is not present");
            }
        }
        sobj.close();
    }
}
