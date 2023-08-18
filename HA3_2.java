//Write a program which accept number from user and display its factors in descending order
//Input : 12
//Output: 6   4   3   2   1   
import java.util.*;

class Number
{
    public void FactRev(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo/2 ; iCnt > 0 ; iCnt--)
        {
            if((iNo % iCnt)==0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

public class HA3_2 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        {
            nobj.FactRev(iValue);
        }
        sobj.close();
    }    
}
