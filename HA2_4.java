//Accept number from user and check wheather it is even or odd
import java.util.*;

class Number
{
    public boolean ChkNo(int iNo)
    {
        if((iNo %2)==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

public class HA2_4 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        int iValue1 = sobj.nextInt();

        Number nobj= new Number();
        {
            boolean bRet = nobj.ChkNo(iValue1);

            if(bRet == true)
            {
                System.out.println("EVEN");
            }
            else
            {
                System.out.println("ODD");
            }
        }
        sobj.close();
    }    
}
