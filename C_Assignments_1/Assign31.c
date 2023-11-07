#include<stdio.h>

int MultFact(int iNo)
{
    int iResult = 1;
    int icnt = 0;

     for(icnt=1; icnt<=(iNo/2) ; icnt++)
{
    if((iNo % icnt) == 0)
    {
        iResult = iResult*icnt;
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

    iRet = MultFact(iValue);
   
    printf("Multiplication of factors is:%d\n",iRet);
    return 0;
}