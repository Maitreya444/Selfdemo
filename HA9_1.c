/*Accept N numbers from user and return difference between summation of even elements and summation of even elements and
summation of odd elements.
Input :-  N : 6
Elements :- 85   66  3   80  93  88
Output :- 53 (234 - 181) */

#include<stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int OddSum = 0;
    int EvenSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] %2 !=0)
        {
            OddSum = OddSum + Arr[iCnt];
        }
        else if (Arr[iCnt] %2 ==0)
        {
            EvenSum = EvenSum + Arr[iCnt];
        }
    }
    return OddSum - EvenSum;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);    

    ptr =(int*)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
     printf("Unable to allocate memory \n");
     return -1;
    }

    printf("Enter number of elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
     scanf("%d", &ptr[iCnt]);
    }
    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
     printf("%d\n", ptr[iCnt]);
    }
    iRet = Difference(ptr, iSize);
    //iRet = DifferenceOdd(ptr, iSize);
    printf("Summation of elements is : %d",iRet);

    free(ptr);

    return 0;
}
