//Accept one number from user and print that number of * on screen
import java.util.*;

class Number
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        for(iCnt =1; iCnt<=iNo; iCnt++)
        {
            System.out.println("*");
        }
    }
}
public class HA2_1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        {
            nobj.Display(iValue);
        }
        sobj.close();
    }
}