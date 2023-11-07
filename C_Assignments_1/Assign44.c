#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iResult;
    int count = 0;

    if(iNo1 == 0)
    {
        count++;
        iNo1 = 1;
    }

    if(iNo2 == 0)
    {
        count++;
        iNo2 = 1;
    }

    if(iNo3 == 0)
    {
        count++;
        iNo3 = 1;
    }
    iResult = iNo1*iNo2*iNo3;

    

}



int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;
    printf("Enter the three numbers");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    iRet= Multiply(iValue1,iValue2,iValue3);
    printf("%d\n",iRet);
    return 0;
}
