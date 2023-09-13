//Write a program which accept number from user and check wheather it is greater than 100 or not
//Input : 11 Smaller
//Output : 520 Greater

import java.util.*;

class Number
{
    public boolean ChkNo(int No)
    {
        if(No <= 99)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class HA4_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        int iNo = sobj.nextInt();

        Number nobj = new Number();
        {
            boolean bRet = nobj.ChkNo(iNo);
            if(bRet == true)
            {
                System.out.println("Greater");
            }
            else
            {
                System.out.println("Smaller");
            }
        }
        sobj.close();
    }   
}