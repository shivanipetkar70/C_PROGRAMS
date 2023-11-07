// Write a program which accept number from user and check whether it contains 0 in it or Not.
// Input : 5 9 3 2
// Output : There is No Zero
// Input : 1018  
// Outut : It contains zero


#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
       iDigit = iNo % 10;
       if(iDigit == 0)
       {
        return TRUE;
       }
       iNo = iNo / 10;           // Self updating statement
    }
}
int main ()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is No Zero");
    }

    return 0 ;
}