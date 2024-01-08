//Write a program which accept number from user and return count of even digit.
//Input : 1234
//Output : 2

//S-1
import java.util.*;

//S-6
class Number
{
    public int CheckEven(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit %2 == 0)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }
}


//S-2
public class HA8_1
{
    public static void main(String[] args) 
    {
        //S-3
        Scanner sobj = new Scanner(System.in);
        
        //S-4
        System.out.println("Enter a Number");
        int iValue = sobj.nextInt();

        //S-5
        Number nobj = new Number();
        {
            int iRet = nobj.CheckEven(iValue);
            System.out.println("Even number in digit is : "+iRet);
        }
        sobj.close();
    }
}