/*Write a program which accepts elemnets from user and also takes input frrom user and and returns the index of theat number

N : 6
NO : 66
Elements : 85   66  11  3   66  93  88
Output : 1
*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0 
typedef int BOOL;

int ChkInx(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt =0; iCnt <iLength; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            return iCnt;
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
    BOOL bRet = 0;
    int iValue = 0;

    printf("Enter the Number of elements you want to enter \n");
    scanf("%d", &iSize);

    printf("Enter the number you want to check \n");
    scanf("%d", &iValue);

    ptr = (int*)malloc(iSize * sizeof (int));

    printf("Enter Elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Your Elements are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t\n", ptr[iCnt]);
    }

    bRet = ChkInx(ptr, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Index is %d",bRet);
    }
    else
    {
        printf("No such element found \n");
    }
    return 0;
}