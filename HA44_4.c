
#include<stdio.h>
#include<stdlib.h>

int Difference(int iLength, char Arr[])
{
    int iCnt = 0;
    int iCount1 = 0;
    int iCount2 = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
       iCount1 ++;

       else if(Arr[iCnt] >='a' && Arr[iCnt] <= 'z')
       {
        iCount2 ++;
       }
    }
    return iCount1 - iCount2;
}

int main()
{
    int iSize1 = 0;
    char *ptr1 = NULL;
    int iCnt = 0;
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

    iRet = Difference(iSize1, ptr1);

    printf("Difference is : %d",iRet );

    free(ptr1);
    return 0;
}