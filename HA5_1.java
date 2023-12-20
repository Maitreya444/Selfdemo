//Write a program which accept number from user and print that number of $&* on screen 
//Input : 5
//Output : $&* $&* $&* $&* $&*

import java.util.Scanner;

class Number
{
    public void Pattern(int iValue)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt<=iValue; iCnt++)
        {
            System.out.print("$   &   *\t");
        }
    }
}

class HA5_1
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