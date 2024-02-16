//Accept N numbers from user and check wheather that number contains 11 or not
//Input : 6 
//     E: 85 66 11 80 93 88 
//Output : 11 is Present

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

    public int Check11()
    {   
        int flag = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] %11 ==0)
            {
                flag = 1;
                break;
            }
        }
        return flag;
    }
}

class HA10_3
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
        iRet = aobj.Check11();

        if(iRet == 1)
        {
            System.out.println("11 is present");
        }
        else
        {
            System.out.println("11 is not present");
        }

        sobj.close();
    }
}
