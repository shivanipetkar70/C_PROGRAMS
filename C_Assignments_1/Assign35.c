#include<stdio.h>

int FactDiff(int iNo)
{
    int iResult = 0;
    int iResult1 = 0;
    int iResult2 = 0;
    int icnt = 0;

for(icnt=1; icnt<=(iNo) ; icnt++)
{
    if((iNo % icnt) == 0)
    {
        iResult1 = iResult1+icnt;
    }
}
return iResult1;
for(icnt=1; icnt<=(iNo) ; icnt++)
{
    if((iNo % icnt) != 0)
    {
        iResult2 = iResult2+icnt;
    }
}
return iResult2;  

iResult = iResult1-iResult2;
return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d\n",&iValue);

    iRet = FactDiff(iValue);
   
    printf("Difference of factors is :%d\n",iRet);
    return 0;
}