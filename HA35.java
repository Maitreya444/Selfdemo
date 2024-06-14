import java.util.*;

class Digits
{
    int CheckEven(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 ==0)
            {
                iCnt ++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }

    int CheckOdd(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 !=0)
            {
                iCnt ++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }

    int CountRange(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit >=3 && iDigit <=7)
            {
                iCnt ++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }

    int Multiply(int iNo)
    {
        int iDigit = 0;
        int iCnt = 1;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit !=0)
            {
                iCnt = iDigit * iCnt;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }

    int Summation(int iNo)
    {
        int iDigit = 0;
        int iOdd = 0;
        int iEven = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if(iDigit %2 ==0)
            {
                iEven = iEven + iDigit;
            }
            else if(iDigit %2 !=0)
            {
                iOdd = iOdd + iDigit;
            }
            iNo = iNo / 10;
        }
        return iEven - iOdd;
    }
}

class HA35 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter a Number ");

        int iValue = sobj.nextInt();

        Digits nobj = new Digits();
        {
            int iRet1 = nobj.CheckEven(iValue);
            System.out.println("Even Number in digit is : "+ iRet1);

            int iRet2 = nobj.CheckOdd(iValue);
            System.out.println("Odd Number in digit is : "+iRet2);

            int iRet3 = nobj.CountRange(iValue);
            System.out.println("Number Between 3 and 7 are : "+ iRet3);

            int iRet4 = nobj.Multiply(iValue);
            System.out.println("Multiplied Digits are : "+iRet4);

            int iRet5 = nobj.Summation(iValue);
            System.out.println("Summation is : "+iRet5);
        }
        sobj.close();
    }
}
