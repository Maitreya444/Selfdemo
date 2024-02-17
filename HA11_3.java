import java.util.Scanner;

class ArrayX
{
    public int Arr[];
    public int No2;

    ArrayX(int iSize, int iChoice)
    {
        Arr = new int [iSize];
        this.No2 = iChoice;
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

        System.out.println("Enter the Elements : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public int ChkIndex()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        int index = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == No2)
            {
                index = iCnt;
                continue;
            }
        }
        return index;
    }
}

class HA11_4
{
    public static void main(String[] args) 
    {
        int iRet = 0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Elements : ");
        int iSize = sobj.nextInt();

        System.out.println("Enter the Number you want to check : ");
        int iNo2 = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize, iNo2);
        aobj.Accept();
        aobj.Display();
        iRet = aobj.ChkIndex();

        System.out.println("Index is : "+ iRet);

        sobj.close();
    }
}
