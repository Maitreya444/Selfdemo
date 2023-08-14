//Program to divide two numbers
#include<stdio.h>

int DivideNo(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0)
    {
        printf("Enter a non 0 number \n");
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter No1 \n");
    scanf("%d",&iNo1);

    printf("Enter No2 \n");
    scanf("%d", &iNo2);
    
    iRet = DivideNo(iNo1, iNo2);

    printf("Ans is %d\n", iRet);

    return 0;
}