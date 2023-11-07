#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkGreater(int iNo1,int iNo2)
{
    if((iNo1,iNo2<0))
    {
        iNo1 = -iNo1;
        iNo2 = -iNo2;

    }
    if(iNo1=iNo2)
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
    int iValue1 = 0 , iValue2 = 0;
    BOOL bRet = FALSE;
    printf("please enter first number");
    scanf("%d",&iValue1);
    printf("please enter second number");
    scanf("%d",&iValue2);
    bRet = ChkGreater(iValue1,iValue2);
    if(bRet==true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}