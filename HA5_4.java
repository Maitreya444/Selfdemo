//Accepts N number from user and print all odd Numbers upto N
//Input : 18
//Output : 1    3   5   7   9   11  13

import java.util.Scanner;

class Number
{
    public void Pattern(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <=iNo; iCnt++)
        {
            if(iCnt %2 !=0)
            {
                System.out.print(iCnt);
            }
        }
    }
}

public class HA5_4 
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
