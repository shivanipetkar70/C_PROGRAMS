#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    char ch = 'A';
    for(icnt=1; icnt<=iNo; icnt++) 
    { 
      for(icnt=1;icnt<=iNo;icnt++)
      {
        printf("%c\t",ch);
        ch++;
      }
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