//Write a program which accept number from user and return summation of all its non factors
//Input: 12
//Output: 50
import java.util.*;

class Number
{
    public int SumNonFact(int iNo)
    {
        int iCnt =0;
        int Ans=0;

        for(iCnt = 1; iCnt<iNo; iCnt++)
        {
            if((iNo % iCnt)!=0)
            {
                Ans = Ans + iCnt;
            }
        }
        return Ans;
    }
}

public class HA3_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        {
            int iRet = nobj.SumNonFact(iValue);
            System.out.println("Summation is :"+ iRet);
        }
        sobj.close();
    }
}