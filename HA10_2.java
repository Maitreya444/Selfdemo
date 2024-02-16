//Accept N numbers from user and return difference between frequency of even numbers and odd numbers
//Input : N : 7
//        E : 85 66 3 80 93 88 90 
//Output : 1(4-3)

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

        for(iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {   
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Elements are : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public int Frequency()
    {
        int EvenCount = 0;
        int OddCount = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] %2 ==0)
            {
                EvenCount++;
            }
            else if(Arr[iCnt] %2 !=0)
            {
                OddCount++;
            }
        }
        return EvenCount- OddCount;
    }
}

class HA10_2 
{
    public static void main(String[] args) 
    {   
        int iRet = 0;
        
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number of Elements");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);
        aobj.Accept();
        aobj.Display();
        iRet = aobj.Frequency();

        System.out.println("Difference is "+ iRet);

        sobj.close();
    }
}
