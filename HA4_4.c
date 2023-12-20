//Write a program which accept three numbers and print its multiplication.
//Input : 5   4   7
//Output : 140
//Input : 5   0   7
//Output : 35

#include<stdio.h>

/*int Multiply1(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 == 0)
    {
       return iNo2 * iNo3;
    }
    if (iNo2 == 0)
    {
        return iNo1 * iNo3;
    }
    if (iNo3 == 0)
    {
        return iNo1 * iNo2;
    }
    else
    {
        return iNo1 * iNo2 * iNo3;
    }
}*/

int Multiply2(int iNo1, int iNo2, int iNo3)
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
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet1 = 0;
    int iRet2 = 0;

    printf("Enter the value of 1st number \n");
    scanf("%d", &iValue1);
    printf("Enter the value of 2nd number \n");
    scanf("%d", &iValue2);
    printf("Enter the value of 3rd number \n");
    scanf("%d", &iValue3);

    //iRet1 = Multiply1(iValue1, iValue2, iValue3);
    iRet2 = Multiply2(iValue1, iValue2, iValue3);

    //printf("Multiplication is : %d\n", iRet1);
    printf("Multiplication is : %d\n", iRet2);

    return 0;

}