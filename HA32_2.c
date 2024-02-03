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

void Pallindrome(PNODE Head)
{
    int iDigit = 0;
    int iReverse = 0;
    int iNo = 0;

    while(Head != NULL)
    {
        iNo = Head -> data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iReverse = (iReverse * 10)+iDigit;
            iNo = iNo / 10;
        }

        if(iReverse == Head -> data)
        {
            printf("%d\t", iReverse);
        }
        iReverse = 0;
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 69);
    InsertFirst(&First, 51);
    InsertFirst(&First, 121);
    InsertFirst(&First, 11);
    Display(First);
    Pallindrome(First);

    return 0;
}