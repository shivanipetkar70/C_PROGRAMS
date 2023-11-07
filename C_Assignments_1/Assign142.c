#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
     
    for(icnt=iNo; icnt>=1; icnt--) 
    { 
       printf("%d \t #\t",icnt);
       
    }
   printf("\n"); 
}
int main()
{
    int iFrequency = 0;

    printf("Enter the Frequency of Symbol:\n");
    scanf("%d",&iFrequency);
    Display(iFrequency);
    
return 0;
}