
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int Data;
    struct node * Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head , int no )
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Next = NULL;
    newn->Data = no;
    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
}

void DisplayPerfect(PNODE Head)
{

    int iNo = 0, iCnt = 0; 

    while(Head != NULL)
    {
        iNo = 0; 

    for(iCnt = 1; iCnt < Head -> Data; iCnt++) 
        {
            if(Head -> Data  == iNo) 
            {
                iNo = iNo + iCnt; 
            }
        }
        if(Head -> Data == iNo) 
        {
            printf("%d\t", iNo); 
        }
        Head = Head -> Next; 
    }
}

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d|->\t", Head -> Data);
        Head = Head -> Next;
    }
    printf("NULL\n");
}

int main()
{

    PNODE First = NULL;
    
    InsertFirst(&First, 89);     
    InsertFirst(&First, 6);   
    InsertFirst(&First, 41);   
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    Display(First);

    DisplayPerfect(First);

    return 0;
}