import java.util.*;

class ArrayX
{
    public int Arr[];

    ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the Elements : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Elements are : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public int Max()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        int iMin = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
        }
        return iMin;
    }
}

class HA12_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter a Number : ");
        iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);
        aobj.Accept();
        aobj.Display();
        iRet = aobj.Max();

        System.out.println("Min is : "+iRet);

        sobj.close();
    }
}