//Accept single digit number from user and print into word.
#include<stdio.h>

void Digit(int iNo)
{
    if(iNo == 1)
    {
        printf("One");
    }
    else if(iNo ==2)
    {
        printf("Two");
    }
    else if(iNo == 3)
    {
        printf("Three");
    }
    else if (iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if (iNo ==6)
    {
        printf("Six");
    }
    else if (iNo == 7)
    {
        printf("Seven");
    }
    else if(iNo == 8)
    {
        printf("Eight");
    }
    else if(iNo == 9)
    {
        printf("Nine");
    }
    else if (iNo >10)
    {
        printf("Invalid");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a Number \n");
    scanf("%d", &iValue);

    Digit(iValue);

    return 0;
}