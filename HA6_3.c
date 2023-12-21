//Factorial of Number

#include<stdio.h>

int FindFactorial(int iNo)
{
    int iCnt = 0;
    int iFactorial = 1;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFactorial =iFactorial* iCnt;
    }

    return iFactorial;
}

int main()
{
    int iValue = 0;
    printf("Enter a Number: ");
    scanf("%d", &iValue);

    int result = FindFactorial(iValue);

    printf("Factorial of %d is: %d\n", iValue, result);

    return 0;
}

