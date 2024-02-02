#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
} NODE, *PNODE, **PPNODE;

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
        printf("|%d | ->  ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

void Sum(PNODE Head)
{
    int iNo = 0;
    int iSum = 0;
    while(Head != NULL)
    {
        iNo = Head -> data;

        if((Head -> data) %2 ==0)
        {
            iSum = iSum + Head -> data;
        }
        Head = Head -> next;
    }
    printf("%d\t", iSum);
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 100);
    InsertFirst(&First, 101);
    InsertFirst(&First, 40);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Display(First);
    Sum(First);

    return 0;
}