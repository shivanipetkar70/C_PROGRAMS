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

int Addition(PNODE Head)
{

    int Sum = 0;

   while(Head != NULL)
    {
       
         Sum = Sum + Head -> Data; 
         Head = Head -> Next;
       
     }
     return Sum;
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
    int iRet=0;int iNo = 0;
    InsertFirst(&First, 70);     
    InsertFirst(&First, 30);   
    InsertFirst(&First, 40);   
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);
    Display(First);

  printf("\nEnter element to search: ");
    scanf("%d", &iNo);
    iRet = Addition(First);
printf("The Addition is: %d ", iRet);
    return 0;
}