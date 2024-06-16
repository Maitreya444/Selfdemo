#include<stdio.h>
#include<stdlib.h>

int DispayElements(int iLength1, int Arr1[], int iLenght2, int Arr2[], int *iLenght3)
{
    int iCnt = 0;
    int *Arr3 = NULL;
    *iLenght3 = iLength1 + iLenght2;

    Arr3 = (int*)malloc(*iLenght3 * sizeof(int));
    if(Arr3 == NULL)
    {
        printf("Unable to allocate memory \n");
    }

    for(iCnt = 0; iCnt < iLength1; iCnt++)
    {
        Arr3[iCnt] = Arr1[iCnt];
    }

    for(iCnt = 0; iCnt < iLenght2; iCnt++)
    {
        Arr3[iLength1 + iCnt] = Arr2[iCnt];
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

    printf("Enter the Number of elements you want in Array 1 \n");
    scanf("%d", &iSize1);

    ptr1 = (int*)malloc(iSize1 * sizeof(int));
    if (ptr1 == NULL)
    {
        printf("Memory allocation failed for Array 1\n");
        return -1;
    }

    printf("Enter the Number of Elements in Array 1 \n");
    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        scanf("%d", &ptr1[iCnt]);
    }

    printf("Enter the Number of Elements you want in Array 2 \n");
    scanf("%d", &iSize2);

    ptr2 = (int*)malloc(iSize2 * sizeof(int));
    if (ptr2 == NULL)
    {
        printf("Memory allocation failed for Array 2\n");
        free(ptr1);
        return -1;
    }

    printf("Enter the Number of Elemnets in Array 2 \n");
    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        scanf("%d", &ptr2[iCnt]);
    }

    for(iCnt = 0; iCnt < iSize1 ; iCnt++)
    {
        printf("%d ", ptr1[iCnt]);
    }
    printf("\n");

    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        printf("%d ", ptr2[iCnt]);
    }
    printf("\n");
    
    ptr3 = DispayElements(iSize1, ptr1, iSize2, ptr2, &iSize3);

    if(ptr3 != NULL)
    {
        printf("Elements combined are \n");

        for(iCnt = 0; iCnt < iSize3; iCnt++)
        {
            printf("%d ", ptr3[iCnt]);
        }
        printf("\n");
        free(ptr3);
    }

    free(ptr1);
    free(ptr2);

    return 0;
}