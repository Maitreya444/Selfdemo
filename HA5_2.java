//Write a program which accept number from user and print numbers till that number 
//Input : 8
//Output : 1   2   3   4   5   6   7   8

import java.util.Scanner;

class Number
{
    public void Pattern(int iValue)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt<=iValue; iCnt++)
        {
            System.out.print(iCnt);
        }
    }
}

class HA5_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter a number");
        int iNo = sobj.nextInt();

        Number nobj = new Number();
        {
            nobj.Pattern(iNo);
        }
        sobj.close();
    }
}
