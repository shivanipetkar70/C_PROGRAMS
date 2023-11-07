#include<stdio.h>

void Pattern(int iNo)
{
    int icnt = 0;
    
    for(icnt=1;icnt<=iNo;icnt++)
     {
          
        printf("%d\n",2*icnt);
          
     }
 
}
   

int main()
{
    int iValue = 0;
   
    printf("Enter the number of elements :\n");
    scanf("%d",&iValue);
   
    Pattern(iValue);
    
return 0;
}