/*Accept Number of rows and columns from user and display below patterns 
Input : iRow = 4
        iCol = 5

Output : 4  4   4   4   4
         3  3   3   3   3   
         2  2   2   2   2   
         1  1   1   1   1     */

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = iRow; i>=1; i--)
    {
        for(j =1; j<=iCol; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0; 
}