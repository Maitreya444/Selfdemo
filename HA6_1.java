//Write a program which accept number from user and if number is les than 50 then print small, if it is greater 
//than 50 and less than 100 then print medium, if its greater than 100 then print large.

import java.util.*;

class Number
{
    public void Decision(int iNo)
    {
        if(iNo <= 50)
        {
            System.out.println("Small");
        }
        else if(iNo > 50 && iNo <=100)
        {
            System.out.println("Medium");
        }
        else
        {
            System.out.println("Greater")
        }
    }
}

class HA6_1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter a Number")
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        {
            nobj.Decision(iValue);
        }
        sobj.close();
    }
}