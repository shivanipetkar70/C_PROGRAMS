#include<stdio.h>

int SumNonFact(int iNo)
{
    int iResult = 0;
    int icnt = 0;

for(icnt=1; icnt<=(iNo) ; icnt++)
{
    if((iNo % icnt) != 0)
    {
        iResult = iResult+icnt;
    }
    
}
    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d\n",&iValue);

    iRet = SumNonFact(iValue);
   
    printf("Summation of Nonfactors is:%d\n",iRet);
    return 0;
}