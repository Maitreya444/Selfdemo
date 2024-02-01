/*Write a program which Min of particular element from singly linear linked list. Function should 
return position at which element is found*/

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
    printf("|NULL| \n");
}

int Summation(PNODE Head)
{
    int Min = Head -> data;
    while(Head != NULL)
    {
        if(Head -> data < Min)
        {
            Min = Head -> data;
        }
        Head = Head -> next;
    }
    return Min;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 60);
    InsertFirst(&First, 50);
    InsertFirst(&First, 10);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    Display(First);

    iRet = Summation(First);
    printf("Min is : %d\n", iRet);

    return 0;
}