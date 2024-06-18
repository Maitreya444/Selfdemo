#include<stdio.h>
#include<stdlib.h>

struct MinValues 
{
    int min1;
    int min2;
};

struct MinValues Minimum(int iLength1, int Arr1[], int iLength2, int Arr2[])
{
    struct MinValues minVals;
    int iCnt = 0;
    int iSmall1 = Arr1[iCnt];
    int iSmall2 = Arr2[iCnt];

    for(iCnt = 0 ;iCnt < iLength1; iCnt++)
    {
        if(Arr1[iCnt] < iSmall1)
        {
            iSmall1 = Arr1[iCnt];
        }
    }
    minVals.min1 = iSmall1;

    for(iCnt = 0; iCnt < iLength2; iCnt++)
    {
        if(Arr2[iCnt] < iSmall2)
        {
            iSmall2 = Arr2[iCnt];
        }
    }
    minVals.min2 = iSmall2;

    return minVals;
}

int main()
{
    int iSize1 = 0;
    int iSize2 = 0;
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    int iCnt = 0;
    struct MinValues iRet;

    printf("Enter the Size of Array1 you want \n");
    scanf("%d", &iSize1);

    ptr1 = (int*)malloc(iSize1 * sizeof(int));

    printf("Enter the Elements in Array 1 \n");
    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        scanf("%d", &ptr1[iCnt]);
    }

    printf("Elements from Array 1 are : \n");
    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        printf("%d ", ptr1[iCnt]);
    }
    printf("\n");

    printf("Enter the Size of Array2 you want \n");
    scanf("%d", &iSize2);

    ptr2 = (int*)malloc(iSize2 * sizeof(int));

    printf("Enter the Elements in Array 2 \n");
    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        scanf("%d", &ptr2[iCnt]);
    }

    printf("Elements from Array 2 are : \n");
    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        printf("%d ", ptr2[iCnt]);
    }
    printf("\n");

    iRet = Minimum(iSize1, ptr1, iSize2 , ptr2);

    printf("Minimum Elements from Array 1 and Array 2 are : %d , %d\n", iRet.min1, iRet.min2);

    free(ptr1);
    free(ptr2);

    return 0;
}