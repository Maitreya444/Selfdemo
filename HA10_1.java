//Accept N numbers from user and return frequency of even numbers 
//Input : N : 6
//Elements : 85 66 3 80 93 88
//Output : 3

import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {   
        //Same in C++
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
        int iCnt = 0;

        System.out.println("Elements are : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public int EvenFrequency()
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] %2 ==0)
            {
                iCount ++;
            }
        }
        return iCount++;
    }
}

class HA10_1 
{
    public static void main(String[] args) 
    {   
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Elements : ");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);
        aobj.Accept();
        aobj.Display();
        iRet = aobj.EvenFrequency();

        System.out.println("Even Frequency is : "+ iRet);

        sobj.close();
    }
}
