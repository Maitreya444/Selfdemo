import java.util.*;

class Number
{
    public void Decision(int iNo)
    {
        if(iNo == 1)
    {
        System.out.println("One");
    }
    else if(iNo ==2)
    {
        System.out.println("Two");
    }
    else if(iNo == 3)
    {
        System.out.println("Three");
    }
    else if (iNo == 4)
    {
        System.out.println("Four");
    }
    else if(iNo == 5)
    {
        System.out.println("Five");
    }
    else if (iNo ==6)
    {
        System.out.println("Six");
    }
    else if (iNo == 7)
    {
        System.out.println("Seven");
    }
    else if(iNo == 8)
    {
        System.out.println("Eight");
    }
    else if(iNo == 9)
    {
        System.out.println("Nine");
    }
    else if (iNo >10)
    {
        System.out.println("Invalid");
    }
    }
}

class HA6_2
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