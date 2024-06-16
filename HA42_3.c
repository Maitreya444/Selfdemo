#include<stdio.h>
#include<stdlib.h>

void DispayOddElements(int iLength1, int Arr1[], int iLenght2, int Arr2[])
{
    int iCnt = 0;

    printf("Odd Elements of Array 1 are : \n");
    for(iCnt = 0; iCnt < iLength1; iCnt++)
    {
        if(Arr1[iCnt] %2 !=0)
        {
            printf("%d ", Arr1[iCnt]);
        }
    }
    printf("\n");

    printf("Odd Elements of Array 2 are : \n");
    for(iCnt = 0; iCnt < iLenght2; iCnt++)
    {
        if(Arr2[iCnt] %2 !=0)
        {
            printf("%d ", Arr2[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize1 = 0;
    int iSize2 = 0;
    int *ptr1 = NULL;
    int *ptr2 = NULL;
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
    
    DispayOddElements(iSize1, ptr1, iSize2, ptr2);

    free(ptr1);
    free(ptr2);

    return 0;
}