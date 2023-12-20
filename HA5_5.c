//Write a program which accepts N and print first 5 Multiples of it
//Input : 4
//Output : 4    8    12     16      20

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt =1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iNo*iCnt);
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