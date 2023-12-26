//Accept N Numbers from user and accept one another number as NO, check wheather NO is present or not
//Input : N : 6
//      NO : 66
//      E : 85  66  3   66  93  88
//Output : TRUE

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0 
typedef int BOOL;

BOOL Present(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
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
    int iValue = 0;
    int *ptr = NULL;
    BOOL bRet = 0;

    printf("Enter Number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the Number you want to check \n");
    scanf("%d", &iValue);

    ptr = (int*)malloc(iSize * sizeof (int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory \n");
        return -1;
    }

    printf("Enter the elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    bRet = Present(ptr, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("TRUE \n");
    }
    else
    {
        printf("FALSE \n");
    }

    free(ptr);

    return 0;
}