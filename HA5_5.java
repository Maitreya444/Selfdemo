//Write a program which accepts N and print first 5 Multiples of it
//Input : 4
//Output : 4    8    12     16      20

import java.util.Scanner;

class Number
{
    public void Pattern(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <=5; iCnt++)
        {
            System.out.println(iCnt*iNo)
        }
    }
}

public class HA5_5
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter a number ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        {
            nobj.Pattern(iValue);
        }
        sobj.close();
    }
}
