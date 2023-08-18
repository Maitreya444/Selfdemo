//Write a program which accept number from user and display multiplication of factors
//Input : 12
//Output : 144 (1 * 2 * 3 * 4 * 6)
import java.util.*;

class Number
{
    public void MultFact(int iNo)
    {
        int iCnt = 0;
        int Ans = 1;

        for(iCnt =1; iCnt<iNo; iCnt++)
        {
            if((iNo % iCnt)==0)
            {
                Ans = Ans * iCnt;
            }
        }
        System.out.println(Ans);
    }
}

public class HA3_1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a Number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        {
            nobj.MultFact(iValue);
        }
        sobj.close();
    }
}