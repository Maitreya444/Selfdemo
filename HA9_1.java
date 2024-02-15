/*Accept N numbers from user and return difference between summation of even elements and summation of even elements and
summation of odd elements.
Input :-  N : 6
Elements :- 85   66  3   80  93  88
Output :- 53 (234 - 181) */

import java.util.*;

class ArrayX
{
    public int Arr[];
    
    public ArrayX(int iSize)
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
            System.out.println(Arr[iCnt] + "\t");
        }
        System.out.println();
    }

    public int Difference()
    {
        int iSumE = 0;
        int iSumO = 0;
        int iCnt = 0;

        for(iCnt =0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] %2 ==0)
            {
                iSumE = iSumE + Arr[iCnt];
            }
            else
            {
                iSumO = iSumO + Arr[iCnt];
            }
        }
        return iSumE -iSumO;
    }
}

class HA9_1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Elements");
        int iSize = sobj.nextInt();
        int iRet = 0;

        ArrayX aobj = new ArrayX(iSize);
        aobj.Accept();
        aobj.Display();
        iRet = aobj.Difference();
        System.out.println("Summation is : "+iRet);

        sobj.close();
    }
}