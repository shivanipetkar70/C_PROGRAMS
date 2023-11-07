// Write a program which accept number from user and return multiplication of all digits.
// Input : 2395
// Output : 270
// Input : 1018
// Outut : 8

#include<stdio.h>
#include<stdbool.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
       iDigit = iNo % 10;
       if(iDigit == 0)
       {
            iDigit = 1;
       }
       iMul = iMul * iDigit;
       iNo = iNo / 10;           // Self updating statement
    }
    return iMul;
}
int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = MultiDigits(iValue);

    printf("%d",iRet);

    return 0 ;
}

