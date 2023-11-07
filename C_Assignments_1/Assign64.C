// Write a program which accept number from user and display its table.
//Input : 2 
// Output : 2  4  6   8  10  12  14  16   18  20

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10 ; iCnt++)
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

    Table(iValue);

    return 0 ;
}