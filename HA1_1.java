import java.util.*;

class Number
{
    public int Divide (int iNo1, int iNo2)
    {
        if(iNo2 == 0)
        {
            System.out.println("Denominator should not be 0");
        }
        int iAns = 0;
        iAns = iNo1 / iNo2;

        return iAns;
    }
}

public class HA1_1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter 1st Number");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter 2nd number");
        int iValue2 = sobj.nextInt();

        Number dobj = new Number();
        {
            int iRet = dobj.Divide(iValue1, iValue2);
            System.out.println("Division is :"+ iRet);
        }
        sobj.close();
    }    
}
