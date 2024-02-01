/*Write a program which search last occurances of particular element from singly linear linked list. Function should 
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

int SearchLastOcc(PNODE Head, int iNo)
{
    int lastFound = -1;
    int iPos = 1;
    while(Head != NULL)
    {
        if(Head -> data == iNo)
        {
            lastFound = iPos;
        }
        Head = Head -> next;
        iPos ++;
    }
    return lastFound;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 60);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);
    Display(First);

    iRet = SearchLastOcc(First, 30);
    if (iRet != -1)
    {
        printf("Position at: %d\n", iRet);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}