//Accept N numbers from user and check wheather that number contains 11 or not
//Input : 6 
//     E: 85 66 11 80 93 88 
//Output : 11 is Present

#define TRUE 1
#define FALSE 0
typedef int BOOL;

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

BOOL Check11(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] == 11)
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
    BOOL iRet = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory \n");
        return -1;
    }

    printf("Enter the elememts \n");
    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    iRet = Check11(ptr, iSize);

    if(iRet == TRUE)
    {
        printf("11 is present \n");
    }
    else
    {
        printf("11 is absent \n");
    }

    free(ptr);

    return 0;
}