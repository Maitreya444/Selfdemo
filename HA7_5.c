//Write a program which accept number from user abd count frequency of 6 less in the digit
//Input : 2395
//Output : 0
//Input : 1654
//Output : 1

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a Number in digits\n");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    printf("Count is : %d\n", iRet);

    return 0;
}