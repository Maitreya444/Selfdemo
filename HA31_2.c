/*Output should be 11,17,41,89*/

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

void DisplayPrime(PNODE Head)
{   
    while(Head != NULL)
    {
        int iNo = Head->data;
        int iCnt;

        for(iCnt = 2; iCnt * iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                break;
            }
        }

        if (iCnt * iCnt > iNo)
        {
            printf("%d\t", Head->data);
        }

        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 7);
    InsertFirst(&First, 11);
    Display(First);
    DisplayPrime(First);

    return 0;
}