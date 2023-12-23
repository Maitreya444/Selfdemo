//Write a program which accept number from user and return the count of digits in between 3 & 7.
//Input : 2395
//Output : 1

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit <7)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a Number \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("%d\n",iRet);

    return 0;
}