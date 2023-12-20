//Accepts N number from user and print all odd Numbers upto N
//Input : 18
//Output : 1    3   5   7   9   11  13

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt =0; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 !=0)
        {
            printf("%d\t", iCnt);
        }
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