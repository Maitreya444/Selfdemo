//Accept N numbers from user and accept another number as NO, return frequency of NO from it
// N : 6
// NO : 66
// E : 85 66 3 66 93 88

import java.util.*;

class ArrayX
{
    public int Arr[];
    public int iNo2;

    ArrayX(int iSize, int iChoice)
    {
        Arr = new int[iSize];
        this.iNo2 = iChoice;
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

    public int Check11()
    {   
        int flag = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt]  ==iNo2)
            {
                flag = 1;
                break;
            }
        }
        return flag;
    }
}

class HA10_5
{
    public static void main(String[] args) 
    {   
        int iRet = 0;
        
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number of Elements");
        int iSize = sobj.nextInt();

        System.out.println("Enter Number you weant to check : ");
        int iNo2 = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize, iNo2);
        aobj.Accept();
        aobj.Display();
        iRet = aobj.Check11();

        if(iRet == 1)
        {
            System.out.println("present");
        }
        else
        {
            System.out.println("not present");
        }

        sobj.close();
    }
}
