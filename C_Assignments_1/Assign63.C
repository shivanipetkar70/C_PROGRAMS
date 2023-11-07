// Write a program to find factorial of given number.
// Input : 5 
// Output : 120
// Input : -5
// Output : 120

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
      iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)    
    {
        iFact= iFact * iCnt;
    }
    return iFact;   
    
}
int main ()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factoial of a number is %d", iRet);

    return 0 ;
}