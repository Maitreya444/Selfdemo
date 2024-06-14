/*Write a program which accepts elemnets from user and also takes input frrom user and and returns the index of last number

N : 6
NO : 66
Elements : 85   66  11  3   66  93  88
Output : 4
*/

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

int ChkLst(int Arr[], int iLength, int iNo)
{
    int iCnt;
    int iKeep = -1;  // Initialize to -1 to handle the case when the number is not found

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            iKeep = iCnt;
        }
    }
    return iKeep;
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iRet = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements you want to enter: \n");
    scanf("%d", &iSize);

    if(iSize <= 0)
    {
        printf("Invalid size!\n");
        return -1;
    }

    printf("Enter the number you want to check: \n");
    scanf("%d", &iValue);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    printf("Enter the elements: \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Your elements are: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t", ptr[iCnt]);
    }
    printf("\n");

    iRet = ChkLst(ptr, iSize, iValue);

    if(iRet != -1)
    {
        printf("Last index of number %d occurred is: %d\n", iValue, iRet);
    }
    else
    {
        printf("Number %d is not found in the array.\n", iValue);
    }

    free(ptr);  // Free the allocated memory

    return 0;
}
