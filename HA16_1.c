/*Accept Number of rows and columns from user and display below patterns 
Input : iRow = 4
        iCol = 4

Output : A  B   C   D
         A  B   C   D
         A  B   C   D
         A  B   C   D                      */

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'A';

    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
            printf("%c\t", ch++);
        }
        printf("\n");
        ch = 'A';
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