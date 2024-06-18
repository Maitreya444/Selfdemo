#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL IsNumberPalindrome(int num)
{
    int original = num;
    int reversed = 0;
    int digit = 0;

    while (num != 0)
    {
        digit = num % 10;
        reversed = (reversed * 10) + digit;
        num = num / 10;
    }

    return (original == reversed) ? TRUE : FALSE;
}

BOOL IsArrayPalindrome(int arr[], int length)
{
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            return FALSE;
        }
        start++;
        end--;
    }
    return TRUE;
}

BOOL ChkPallindrome(int iLength1, int Arr1[], int iLength2, int Arr2[])
{
    int iCnt = 0;
    int totalLength = iLength1 + iLength2;
    int *combinedArr = (int *)malloc(totalLength * sizeof(int));

    if (combinedArr == NULL)
    {
        printf("Unable to allocate memory for combinedArr\n");
        return FALSE;
    }

    // Check if each number in Arr1 is a palindrome
    for (iCnt = 0; iCnt < iLength1; iCnt++)
    {
        if (!IsNumberPalindrome(Arr1[iCnt]))
        {
            free(combinedArr);
            return FALSE;
        }
    }

    // Check if each number in Arr2 is a palindrome
    for (iCnt = 0; iCnt < iLength2; iCnt++)
    {
        if (!IsNumberPalindrome(Arr2[iCnt]))
        {
            free(combinedArr);
            return FALSE;
        }
    }

    // Copy Arr1 to combinedArr
    for (iCnt = 0; iCnt < iLength1; iCnt++)
    {
        combinedArr[iCnt] = Arr1[iCnt];
    }

    // Copy Arr2 to combinedArr
    for (iCnt = 0; iCnt < iLength2; iCnt++)
    {
        combinedArr[iLength1 + iCnt] = Arr2[iCnt];
    }

    // Check if combined array is a palindrome
    BOOL isCombinedArrPalindrome = IsArrayPalindrome(combinedArr, totalLength);

    free(combinedArr);

    return isCombinedArrPalindrome;
}

int main()
{
    int iSize1 = 0;
    int iSize2 = 0;
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    int iCnt = 0;
    BOOL bRet = FALSE;

    printf("Enter the Size of Array 1 you want: \n");
    scanf("%d", &iSize1);

    ptr1 = (int *)malloc(iSize1 * sizeof(int));

    if (ptr1 == NULL)
    {
        printf("Unable to allocate memory for Array 1\n");
        return -1;
    }

    printf("Enter the Elements in Array 1: \n");
    for (iCnt = 0; iCnt < iSize1; iCnt++)
    {
        scanf("%d", &ptr1[iCnt]);
    }

    printf("Elements from Array 1 are: \n");
    for (iCnt = 0; iCnt < iSize1; iCnt++)
    {
        printf("%d ", ptr1[iCnt]);
    }
    printf("\n");

    printf("Enter the Size of Array 2 you want: \n");
    scanf("%d", &iSize2);

    ptr2 = (int *)malloc(iSize2 * sizeof(int));

    if (ptr2 == NULL)
    {
        printf("Unable to allocate memory for Array 2\n");
        free(ptr1);
        return -1;
    }

    printf("Enter the Elements in Array 2: \n");
    for (iCnt = 0; iCnt < iSize2; iCnt++)
    {
        scanf("%d", &ptr2[iCnt]);
    }

    printf("Elements from Array 2 are: \n");
    for (iCnt = 0; iCnt < iSize2; iCnt++)
    {
        printf("%d ", ptr2[iCnt]);
    }
    printf("\n");

    bRet = ChkPallindrome(iSize1, ptr1, iSize2, ptr2);

    if (bRet == TRUE)
    {
        printf("TRUE \n");
    }
    else
    {
        printf("FALSE \n");
    }

    free(ptr1);
    free(ptr2);

    return 0;
}
