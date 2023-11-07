// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
// Input : 2395
// Output : -15
// Input : 8440
// Outut : 16

#include<stdio.h>
#include<stdbool.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iESum = 0;
    int iOSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
       iDigit = iNo % 10;
       if((iDigit % 2) == 0)
       {
            iESum = iESum + iDigit;
       }
       else if ((iDigit % 2) != 0)
       {
            iOSum = iOSum + iDigit;
       }
       
       iNo = iNo / 10;           // Self updating statement
    }
    return iESum - iOSum;
}
int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0 ;
}

