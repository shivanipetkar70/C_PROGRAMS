#include<stdio.h>

float Percentage(float iOmarks,float iTmarks)
{ if((iOmarks || iTmarks) == 0)
    {
        printf("0");
    }
    
    float fResult = (iOmarks/iTmarks)*100;
    return fResult;
    

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("please enter Obtained marks");
    scanf("%d",&iValue1);
    printf("please enter Total marks");
    scanf("%d",&iValue2);
    fRet = Percentage(iValue1,iValue2);
    printf("%.1f %%",fRet);
    return 0;
}
