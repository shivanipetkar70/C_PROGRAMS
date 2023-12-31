
#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo, int iPos) // dynamic mask creation
{
    unsigned int iMask = 0X00000001; // only rightmost bit is on, check whether bit is on or off from user
    // so if user give 5th bit to check, this 1bit point to 5th bit and from that it shift to left & go till last. 
    unsigned int iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {   
        printf("Please give the position in between 1 to 32");
        return false;
    }

    iMask = iMask << (iPos -1); // if user give 4th bit to on, 
    //    the iMask go to 5th bit(2,3,4,5) so for that we have to do -1 for accurate result

    iResult = iNo & iMask;
    if(iResult == iMask)
    {   
        return true;    
    }
    else
    {   
        return false;   
    }
}
int main()
{
    unsigned int iValue = 0,iPos = 0;
    bool bRet;

    printf("Enter number\n"); // 10 
    scanf("%u",&iValue);

    printf("Enter position\n"); // 2
    scanf("%d",&iPos);

    bRet = CheckBit(iValue,iPos);

    if(bRet == true)
    {   
        printf("Bit is on\n"); // on,on
    }
    else
    {   
        printf("Bit is off\n"); // of
    }

    return 0;
}