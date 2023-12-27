//Write a program which accept number from user and display it in reverse order.
//Input : 1234
//Output : 4321

import java.util.*;

class Number
{
    public void Reverse(int iNo)
    {
        int iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}

public class HA7_1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        {
            nobj.Reverse(iValue);
        }
        sobj.close();
    }
}