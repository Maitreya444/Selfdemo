/*Write a program which accepts N numbers from user and accept Range, Display all elements from that range

N : 6
Start : 60
End : 90
Elements : 85   66  3   75  93  88
Output : 66 75  88  85  88

*/

#include<stdio.h>
#include<stdlib.h>

void ChkRange(int Arr[], int iLength,int iStart, int iEnd)
{
    int iCnt = 0;
    int flag = 0;

    printf("Elements in the range are : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {   
            printf("\n");
            printf("%d", Arr[iCnt]);
            flag = 1;
        }
    }
    if(!flag)
    {
        printf("NOT Found \n");
    }
}

int main()
{
    int iSize = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements you want to enter \n");
    scanf("%d", &iSize);

    if(iSize < 0)
    {
        return -1;
    }

    printf("Enter Starting Range\n");
    scanf("%d", &iValue1);

    printf("Enter Last Range \n");
    scanf("%d", &iValue2);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the numbers in the element \n");
    for(iCnt = 0; iCnt< iSize ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Your elements in array are \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t", ptr[iCnt]);
    }
    printf("\n");

    ChkRange(ptr,iSize, iValue1, iValue2);

    free(ptr);

    return 0;
}