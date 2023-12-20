//Write a program which accept three numbers and print its multiplication.
//Input : 5   4   7
//Output : 140

import java.util.Scanner;

class Number
{
    public int Multiply(int iNo1, int iNo2, int iNo3)
    {
        int iAns = 1;
        if (iNo1 != 0) 
        {
            iAns = iAns * iNo1;
        }
        if (iNo2 != 0) 
        {
            iAns = iAns * iNo2;
        }
        if (iNo3 != 0) 
        {
            iAns = iAns* iNo3;
        }
        return iAns;
    }
}

class HA4_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter 3 Numbers");
        int iNo1 = sobj.nextInt();
        int iNo2 = sobj.nextInt();
        int iNo3 = sobj.nextInt();

        Number nobj = new Number();
        {
            int iRet = nobj.Multiply(iNo1, iNo2, iNo3);

            System.out.println("Multiplication is : "+ iRet);
        }
        sobj.close();
    }
}