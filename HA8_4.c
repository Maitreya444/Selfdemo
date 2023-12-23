//Write a program which accept number from user and return multiplication of all digits
//Input : 2395
//Output : 270

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}