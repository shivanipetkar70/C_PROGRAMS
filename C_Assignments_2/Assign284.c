

#include<stdio.h>
#include<stdbool.h>

unsigned int ToggleBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0X00000001; // get position for toggle the bit 
    unsigned int iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {   
        return false;
    }

    iMask = iMask << (iPos -1); // Not increment by 1 bit.

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    unsigned int iValue = 0, iPos = 0, iRet = 0;

    printf("Enter number\n"); 
    scanf("%u",&iValue);

    printf("Enter position\n"); 
    scanf("%d",&iPos);

    iRet = ToggleBit(iValue,iPos);

    printf("Updated number is : %u\n",iRet); 

    return 0;
}