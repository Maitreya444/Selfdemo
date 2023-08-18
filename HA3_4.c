//Write a program which accept number from user and return summation of all its non factors
//Input: 12
//Output: 50

#include<stdio.h>

int SumNonFactors(int iNo)
{
    int Add =0;
    int iCnt = 0;

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            Add = Add+ iCnt;
        }
    }
    return Add;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number \n");
    scanf("%d", &iValue);

    iRet = SumNonFactors(iValue);

    printf("Summation is : %d\n",iRet);

    return 0;
}