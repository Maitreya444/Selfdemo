#include<stdio.h>
#include<stdlib.h>

int* ReverseArray(int iLength1, int Arr1[], int iLength2, int Arr2[], int *iLength3)
{
    int iCnt =0;

    int *Arr3 = NULL;
    *iLength3 = iLength1 + iLength2;

    Arr3 = (int*)malloc(*iLength3 * sizeof(int));

    if(Arr3 == NULL)
    {
        return NULL;
        printf("Unable to alloate memory in Arr3 \n");
    }

    for(iCnt = 0; iCnt < iLength1; iCnt++)
    {
        Arr3[iCnt] = Arr1[iCnt];
    }

    for(iCnt = 0; iCnt < iLength2; iCnt++)
    {
        Arr3 [iLength1+ iCnt] = Arr2[iCnt];
    }

    return Arr3;
    
}

int main()
{
    int iSize1 = 0;
    int iSize2 = 0;
    int iSize3 = 0;
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    int *ptr3 = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the Size of Array1 you want \n");
    scanf("%d", &iSize1);

    ptr1 = (int*)malloc(iSize1 * sizeof(int));

    if(ptr1 == NULL)
    {
        free(ptr1);
        return -1;
    }

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

    if(ptr2 == NULL)
    {
        free(ptr1);
        return -1;
    }

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

    ptr3 = ReverseArray(iSize1, ptr1, iSize2 , ptr2, &iSize3);

    if(ptr3 == NULL)
    {
        free(ptr1);
        free(ptr2);
        return -1;
    }

    printf("Elements of the concatenated array in are: \n");
    for(iCnt = iSize3 -1; iCnt >= 0; iCnt--)
    {
        printf("%d ", ptr3[iCnt]);
    }
    printf("\n");

    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}