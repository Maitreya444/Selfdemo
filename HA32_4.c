#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d | -> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

void Small(PNODE Head)
{
    int iDigit = 0;
    int iNo = 0;
    int iSmall = 0;

    while(Head != NULL)
    {
        iNo = Head -> data;
        iSmall = 9;
        while(iNo != 0)
        {
            iDigit = iNo % 10;  //Extracts and prints the last digit of iNo using the modulo operator (iNo % 10).
            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            iNo = iNo / 10;     //Divides iNo by 10 to remove the last digit (iNo = iNo / 10).
        }
        printf("%d\t", iSmall);
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 36);
    InsertFirst(&First, 27);
    InsertFirst(&First, 11);
    InsertFirst(&First, 10);
    InsertFirst(&First, 55);
    Display(First);
    Small(First);

    return 0;
}