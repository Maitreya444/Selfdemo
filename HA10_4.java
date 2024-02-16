//Accept N numbers from user and return frequency of 11 from it
//Input : N : 6
//        E : 85 66 3 15 11 11 
//Output : 2

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
            if(Arr[iCnt] ==11)
            {
                EvenCount++;
            }
            
        }
        return EvenCount;
    }
}

class HA10_4
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

        System.out.println("Count is "+ iRet);

        sobj.close();
    }
}