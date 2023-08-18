//Write a program which accept number from user and display all its non factors
//Input : 12
//Output: 5    7    8   9   10  11

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Entr a Number \n");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}