//Write a program which accept two numbers and check wheather numbers are equal or not
//Input : 10 10
//Output : Equal
//Input : 69 88
//Output : Not Equal

import java.util.Scanner;

class Number
{
    public boolean ChkEqual(int iNo1, int iNo2)
    {
        if(iNo1 == iNo2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class HA4_3 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter 2 numbers");
        int iNo1 = sobj.nextInt();
        int iNo2 = sobj.nextInt();

        Number nobj = new Number();
        {
            boolean bRet = nobj.ChkEqual(iNo1, iNo2);
            if(bRet == true)
            {
                System.out.println("Equal");
            }
            else
            {
                System.out.println("Not Equal");
            }
        }
        sobj.close();
    }
}
