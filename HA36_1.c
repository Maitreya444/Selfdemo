/* 36_1 Write a program which accepts N number from user and accept one another number NO, Check wheather NO is present or not

N : 6
NO: 66
Elements : 85   66  3   66  93  88
Output : TRUE
*/

//27 May 1:09:00 LB

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkNo(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            return TRUE;
            break;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number of Elements you want to enter \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter Elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter Element you want to check: \n");
    scanf("%d", &iValue);

    printf("Elements are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    bRet = ChkNo(ptr, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("TRUE \n");
    }
    else
    {
        printf("FALSE \n");
    }

    return 0;
}