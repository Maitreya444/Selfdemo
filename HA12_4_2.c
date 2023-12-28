//Accept N numbers from user and display al such numbers which contains 3 digits in it
//Input : N: 6
//        E: 8225   665    3    953    858
//Output : 665  953   858

#include <stdio.h>
#include <stdlib.h>

int CountDigits(int num)
{
    int count = 0;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}

void DisplayThreeDigitNumbers(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Numbers with three digits are:\n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (CountDigits(Arr[iCnt]) == 3)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &iSize);

    if (iSize <= 0)
    {
        printf("Invalid size. Exiting the program.\n");
        return 1;
    }

    ptr = (int *)malloc(iSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements are:\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    DisplayThreeDigitNumbers(ptr, iSize);

    free(ptr);

    return 0;
}
