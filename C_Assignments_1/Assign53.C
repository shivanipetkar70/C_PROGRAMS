// Write a program which accept number from user and print its Number Line.
// Input : 4
// Output :  -4  -3  -2  -1  0  1  2  3  4

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int Temp = 0;
    
    if(iNo >= 0)
    {
        int Temp = -iNo;

        for(iCnt = Temp ; iCnt <= iNo ; iCnt++)
        {
            printf("%d\t", iCnt);
        }
    }
    else{
        Temp = iNo * -1  ;

        for(iCnt = iNo ; iCnt <= Temp ; iCnt++)
        {
            printf("%d\t", iCnt);
        }
    }
  
}
int main ()
{
    int iValue = 0 ;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0 ;
}