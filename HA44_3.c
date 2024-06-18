/*Write a program whcih accept an array of characters from user and accept one character. Return the occourance of
the character without considering the case

Input : 5
      : A   B  b c B
To find : B
Output : 3 */

#include<stdio.h>
#include<stdlib.h>

int Search(int iLength, char Arr[], char iSearch)
{
    int iCnt = 0;
    int iCount = 0;
    char currentChar = '\0';

    if(iSearch >= 'A' && iSearch <='Z')
    {
        iSearch = iSearch + 32;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        currentChar = Arr[iCnt];

        if(currentChar >='A' && currentChar <='Z')
        {
            currentChar = currentChar + 32;
        }

        if(currentChar == iSearch)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize1 = 0;
    char *ptr1 = NULL;
    int iCnt = 0;
    char iFind = '\0';
    int iRet = 0;

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

    printf("Enter the count of character you want to search \n");
    scanf(" %c", &iFind);

    iRet = Search(iSize1, ptr1, iFind);

    printf("Times : %d",iRet );

    free(ptr1);
    return 0;
}