//Write a program which accept number from user and display multiplication of factors
//Input : 12
//Output : 144 (1 * 2 * 3 * 4 * 6)

#include<stdio.h>

void MultFact(int iNo)
{
    int iCnt = 1;
    int Ans = 1;

    for(iCnt =1; iCnt< iNo; iCnt++)
    {
        if((iNo % iCnt)==0)
        {   
            Ans = Ans * iCnt;
        }
    }
    printf("%d\t",Ans);
}

int main()
{
    int iValue = 0;

    printf("Enter a number \n");
    scanf("%d", &iValue);

    MultFact(iValue);

    return 0;
}