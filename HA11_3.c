//Accept N numbers from user and accept one another number as NO, return index of last occourence of that NO
//Input : N : 6
//       NO : 66
//        E : 85    66     3    66      93      88
//Output : 3

#include<stdio.h>
#include<stdlib.h>

int Occur(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iIndex = -1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
            continue;
        }
    }
    return iIndex;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter Number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the Number that you want to check \n");
    scanf("%d", &iValue);

    ptr = (int *)malloc(iSize * sizeof(int));
    if (ptr == NULL)
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

    iRet = Occur(ptr, iSize, iValue);

    if(iRet == -1)
    {
        printf("No not found :( \n");
    }
    else
    {
        printf("Index of first occourence is : %d\n", iRet);
    }

    free(ptr);

    return 0;
}