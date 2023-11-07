// Write a program which accept number from user and display its table in revese order.
// Input : 2 
// Output : 20 18  16  14  12  10  8  6  4  2    

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 1 ; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
        //printf("%d x %d = %d\n", iNo, iCnt, iNo * iCnt);
    }    
}
int main ()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0 ;
}