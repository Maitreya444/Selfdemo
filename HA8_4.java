//Write a program which accept number from user and return multiplication of all digits
//Input : 2395
//Output : 270

//S:1
import java.util.*;

//S:6
class Digits
{
    public int Multiples(int iNo)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }
        return iMult;
    }
}

public class HA8_4 
{
    public static void main(String[] args) 
    {   
        //S:3
        Scanner sobj = new Scanner(Sysetm.in);

        //S:4
        System.out.println("Enter a Number");

        //S:5
        int iValue = sobj.nextInt();

        //S:6
        Digits dobj = new Digits();
        {
            int iRet = dobj.Multiples(ivalue);
            System.out.println("Multiples are : "+iRet);
        }
        sobj.close();
    }
}
