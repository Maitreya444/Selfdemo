/*Write a program which acept one number from user and count number of ON (1) bits in it whicthout using % and / operator*/

#include<stdio.h>
typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{   
    UINT iMask = 0X00000001;
    UINT iCount = 0;

    while (iNo)
    {
        iCount = iCount + (iNo & iMask); // Check the rightmost bit
        iNo >>= 1;       // Shift right by 1
    }

    return iCount;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter a Number \n");
    scanf("%d", &iValue);

    iRet = CountOne(iValue);

    printf("%d", iRet);

    return 0;
}