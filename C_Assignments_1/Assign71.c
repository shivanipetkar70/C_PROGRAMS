// Write a program which accept number from user and display its digits in reverse.
// Input : 2395
// Output : 5 9 3 2
// Input : 1018  
// Outut : 8101


#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
       iDigit = iNo % 10;
       printf("%d\n",iDigit);
       iNo = iNo / 10;           // Self updating statement
    }
}
int main ()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0 ;
}