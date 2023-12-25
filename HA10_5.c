//Accept N numbers from user and accept another number as NO, return frequency of NO from it
// N : 6
// NO : 66
// E : 85 66 3 66 93 88

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int iValue =0;
    int *ptr = NULL;

    printf("Enter the Number of Elements \n");
    scanf("%d", &iSize);

    printf("Enter the Number you want to check \n");
    scanf("%d", &iValue);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory \n");
        return -1;
    }

    printf("Enter the elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    iRet = Frequency(ptr, iSize, iValue);

    printf("No comes : %d\n",iRet ,"times");

    free(ptr);

    return 0;
}
