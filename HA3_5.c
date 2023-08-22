//Write a program which accept number from user and return difference between summation of all its factors and non factors
//Input :12
//Output: -34       (16-50)
#include <stdio.h>

int SumAll(int iNo) {
    int iCnt = 0;
    int SumFactor = 0;
    int SumNonFactor = 0;
    int All = 0;

    for (iCnt = 1; iCnt <= iNo/2; iCnt++) 
    {
        if ((iNo % iCnt) == 0) 
        {
            SumFactor = SumFactor + iCnt;
        } 
        else 
        {
            SumNonFactor = SumNonFactor + iCnt;
        }
    }

    All = SumNonFactor - SumFactor;

    return All;
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRet = SumAll(iValue);

    printf("Difference is : %d\n", iRet);

    return 0;
}
