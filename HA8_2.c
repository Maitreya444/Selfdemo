//Write a program which accept number from user and return count of odd digit.
//Input : 1234
//Output : 2

#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 !=0)
        {
            iCnt ++;
        }
        iNo = iNo /10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Numbers \n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("%d\n",iRet);

    return 0;
}