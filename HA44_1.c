#include<stdio.h>
#include<stdlib.h>

void ArrayReplace(int iLength1, char Arr1[], int iLength2, char Arr2[])
{
    int iCnt = 0;
    int iSmall = 0;

    printf("Small letters from Array 1 are : \n");
    for(iCnt = 0; iCnt < iLength1 ; iCnt++)
    {
        if(Arr1[iCnt] >= 'A' && Arr1[iCnt] <= 'Z')
        {
            iSmall = Arr1[iCnt] + 32;
            printf("%c ", iSmall);
        }
    }
    printf("\n");

    printf("Small letters from Array 2 are : \n");
    for(iCnt = 0; iCnt < iLength2; iCnt++)
    {
        if(Arr2[iCnt] >= 'A' && Arr2[iCnt] <= 'Z')
        {
            iSmall = Arr2[iCnt] + 32;
            printf("%c ", iSmall);
        }
    }
    printf("\n");
}

int main()
{
    int iSize1 = 0;
    int iSize2 = 0;
    char *ptr1 = NULL;
    char *ptr2 = NULL;
    int iCnt = 0;

    printf("Enter the size of Array 1 you want : \n");
    scanf("%d", &iSize1);

    ptr1 = (char*)malloc(iSize1 * sizeof(char));
    if(ptr1 == NULL)
    {
        printf("Unable to allocate memory in ptr1 \n");
        return -1;
    }
    //getchar() after reading the array sizes to consume the newline character left in the input buffer.
    getchar();

    printf("Enter the characters in Array 1 : \n");
    for(iCnt = 0; iCnt < iSize1 ; iCnt++)
    {
        scanf(" %c", &ptr1[iCnt]);
    }
    printf("\n");

    printf("Elements from Array 1 are : \n");
    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        printf("%c ", ptr1[iCnt]);
    }
    printf("\n");

    printf("Enter the size of Array 2 you want : \n");
    scanf("%d", &iSize2);

    ptr2 = (char*)malloc(iSize2 * sizeof(char));

    if(ptr2 == NULL)
    {
        printf("Unable to allocate memory in ptr2 \n");
        free(ptr1);
        return -1;
    }

    getchar();

    printf("Enter the characters in Array 2 : \n");
    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        scanf(" %c", &ptr2[iCnt]);  //space before %c in scanf to skip any whitespace characters.
    }
    printf("\n");

    printf("Elements from Array 2 are : \n");
    for(iCnt = 0; iCnt < iSize2 ; iCnt++)
    {
        printf("%c ", ptr2[iCnt]);
    }
    printf("\n");

    ArrayReplace(iSize1, ptr1, iSize2, ptr2);

    free(ptr1);
    free(ptr2);

    return 0;
}