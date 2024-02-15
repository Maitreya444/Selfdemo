/*Accept N numbers from user and display all such elements which are divisible by 3 and 5
Input : N= 6
Elements : 85 66 15 80 93 88
Output : 15
*/

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

    void Difference()
    {
        int iSumE = 0;
        int iSumO = 0;
        int iCnt = 0;

        for(iCnt =0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt]%3 ==0 && %5 ==0)
            {
                System.out.println(Arr[iCnt]);
            }  
        }
    }
}

class HA9_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Elements");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);
        aobj.Accept();
        aobj.Display();
        aobj.Difference();

        sobj.close();
    }
}