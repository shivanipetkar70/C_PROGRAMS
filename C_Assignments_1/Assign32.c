#include<stdio.h>

void FactRev(int iNo)
{
   
    int icnt = 0;

for(icnt=iNo; icnt>=1 ; icnt--)
{
    if((iNo % icnt) == 0)
    {
            printf("%d\t",icnt);

    }
    
}
   
}

int main()
{
    int iValue = 0;
    

    printf("Enter the number:\n");
    scanf("%d\n",&iValue);

    FactRev(iValue);
   
    
    return 0;
}