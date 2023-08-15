import java.util.*;

class Number
{
    public boolean ChkDivisible(int iNo)
    {
        if((iNo %5)==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

public class HA1_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        {
            boolean bRet = nobj.ChkDivisible(iValue);

            if(bRet == true)
            {
                System.out.println("It is divisible by 5");
            }
            else
            {
                System.out.println("It is not divisble by 5");
            }
        }
        sobj.close();
    }
}