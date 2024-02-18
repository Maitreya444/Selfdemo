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
        int iMax = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
        }
        return iMax;
    }
}

class HA12_1
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

        System.out.println("Max is : "+iRet);

        sobj.close();
    }
}