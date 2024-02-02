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

int SecondMAX(PNODE Head)
{
    int iNo = 0;
    int iMax1 = 0;
    int iMax2 = 0;
    int iCnt = 0;

    while(Head != NULL)
    {
        iMax1 = Head->data;
        iMax2 = Head -> data;

            if(( Head -> data > iMax1))
            {   
                iMax2 = iMax1;
                iMax1 = Head -> data;
            }
            else if(Head -> data > iMax2 && Head -> data < iMax1)
            {
                iMax2 = Head -> data;
            }
        Head = Head -> next;
    }
    return iMax2;
}

int main()
{
    PNODE First = NULL;
    int iret = 0;
    InsertFirst(&First, 101);
    InsertFirst(&First, 40);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Display(First);
    iret = SecondMAX(First);
    printf("2nd Max is %d\t", iret);

    return 0;
}