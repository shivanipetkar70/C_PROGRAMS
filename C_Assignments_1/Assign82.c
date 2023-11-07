// Write a program which accept number from user and return the count of odd digits.
// Input : 2395
// Output : 3
// Input : 8462
// Outut : 0

#include<stdio.h>
#include<stdbool.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
       iDigit = iNo % 10;
       if((iDigit % 2) != 0)
       {
            iCnt++;
       }
       iNo = iNo / 10;           // Self updating statement
    }
    return iCnt;
}
int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("frequency of Odd Digits : %d",iRet);

    return 0 ;
}