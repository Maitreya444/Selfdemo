import java.util.*;

class Number
{
    public void PrintStar(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            System.out.print("*");
        }
    }
}

public class HA1_5 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter a Number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        {
            nobj.PrintStar(iValue);
        }
        sobj.close();
    }    
}
