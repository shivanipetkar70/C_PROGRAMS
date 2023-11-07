
#include<stdio.h>
#include<stdbool.h>

unsigned int OffBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0X00000001; // accept position and if the bit is on, turn it off
    unsigned int iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {   
        return 0;
    }

    iMask = iMask << (iPos-1);

    iMask = ~iMask; // tilda/toggel operator if bit is 1 then it convert into 0

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    unsigned int iValue = 0, iPos = 0, iRet = 0;

    printf("Enter number\n"); 
    scanf("%u",&iValue);

    printf("Enter position\n"); 
    scanf("%d",&iPos);

    iRet = OffBit(iValue,iPos);

    printf("New number is : %u\n",iRet); 

    return 0;
}