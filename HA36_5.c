/*Write a program taht takes input from user and returns product of odd elements in the array
N : 6
Elements : 15   66  3   70  10  88
Output : 45
*/

#include<stdio.h>
#include<stdlib.h>

int OddPro(int Arr[], int iLength)
{
    int iCnt = 0;
    int Product = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] %2 !=0)
        {
            Product = Product * Arr[iCnt];
        }
    }
    return Product;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter a number of elements you want to store \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Your Elements are : \n");
    {
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            printf("%d\t", ptr[iCnt]);
        }
    }   
    printf("\n");

    iRet = OddPro(ptr, iSize);

    printf("Odd product of elements is : %d\n", iRet);

    free(ptr);

    return 0;
}