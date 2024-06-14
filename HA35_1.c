//Write a java program which accept number from the user and return count of even digits
/*
    Input : 2395
    Output : 1

    Input : 1018
    Output : 2
*/

#include<stdio.h>

int EvenCount(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 ==0)
        {
            iCnt ++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number \n");
    scanf("%d", &iValue);

    iRet = EvenCount(iValue);

    printf("Even Count is : %d\t", iRet);

    return 0;
}
