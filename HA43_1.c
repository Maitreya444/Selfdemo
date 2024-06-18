#include<stdio.h>
#include<stdlib.h>

int Summation(int iLength1, int Arr1[], int iLength2, int Arr2[])
{
    int iCnt =0;
    int iSum1 = 0;
    int iSum2 = 0;

    for(iCnt = 0; iCnt < iLength1 ; iCnt++)
    {
        iSum1 = iSum1 + Arr1[iCnt]; 
    }

    for(iCnt = 0; iCnt < iLength2 ; iCnt++)
    {
        iSum2 = iSum2 + Arr2[iCnt];
    }

    return iSum1 - iSum2;
}

int main()
{
    int iSize1 = 0;
    int iSize2 = 0;
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    int iCnt = 0;
    int iRet = 0;

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

    iRet = Summation(iSize1, ptr1, iSize2 , ptr2);

    printf("Summation of Elements from Array 1 and Array 2 are : %d", iRet);

    free(ptr1);
    free(ptr2);

    return 0;
}