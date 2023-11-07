// Write a program which accept number from user and count frequency of 2 in it.
// Input : 5 9 3 2
// Output : 1
// Input : 1018  
// Outut : 0

#include<stdio.h>
#include<stdbool.h>

int CountTwo(int iNo)
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
       if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("frequency of 2 is : %d",iRet);

    return 0 ;
}