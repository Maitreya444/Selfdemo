//Write a program which accept number from user and print numbers till that number 
//Input : 4
//Output : -4   -3   -2  -1  0  1   2   3   4

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo; iCnt <=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a Number \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}