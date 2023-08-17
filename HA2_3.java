//Accept two numbers from user and display first number in second number of times
//Input : 12    5   
//Output: 12    12  12  12  12
import java.util.*;

class Number
{
    public void Display(int iNo1, int iNo2)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt<= iNo2; iCnt++)
        {
            System.out.println(iNo1);
        }
    }
}

public class HA2_3 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter a Number 1");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter a Number 2");
        int iValue2 = sobj.nextInt();

        Number nobj = new Number();
        {
            nobj.Display(iValue1, iValue2); 
        }
        sobj.close();
    }    
}
