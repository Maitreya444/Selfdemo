//Accept two numbers from user and display first number in second number of times
//Input : 12    5   
//Output: 12    12  12  12  12
#include<stdio.h>

void Display(int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt =1; iCnt<=iNo2; iCnt++)
    {
        printf("%d\n", iNo1);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter a number 1 \n");
    scanf("%d", &iValue1);

    printf("Enter a number 2 \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}