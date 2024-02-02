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

void DisplayPerfect(PNODE Head)
{
    int iNo = 0;
    int iSum = 0;
    int iCnt = 0;

    while(Head != NULL)
    {
        iNo = Head->data;

        for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == iNo)
        {
            printf("%d is perfect number\n",iNo);
        }

        iSum = 0;
        Head = Head -> next;
    }

}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 101);
    InsertFirst(&First, 40);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Display(First);
    DisplayPerfect(First);

    return 0;
}