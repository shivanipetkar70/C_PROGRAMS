#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkGreater(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;

    }
    if(iNo>100)
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
    int iValue = 0 ;
    BOOL bRet = FALSE;
    printf("please enter number");
    scanf("%d",&iValue);
    bRet = ChkGreater(iValue);
    if(bRet==true)
    {
        printf("greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}