//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits
//Input : 2395
//Output : -15 (2-17)

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iSumOdd = 0;
    int iSumEven = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 !=0)
        {
            iSumOdd = iSumOdd + iDigit;
        }
        else if(iDigit %2 ==0)
        {
            iSumEven = iSumEven + iDigit;
        }
        
        iNo = iNo / 10;
    }
    return iSumOdd - iSumEven;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number \n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}