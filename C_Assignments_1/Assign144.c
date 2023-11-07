#include<stdio.h>

void Display(int iNo)
{
    int icnt = 1;
     
    for(icnt=1; icnt<=iNo; icnt++) 
    { 
       printf("#\t %d\t *\t",icnt);
    }
   

}
int main()
{
    int iFrequency = 0;

    printf("Enter the Frequency of Symbol:\n");
    scanf("%d",&iFrequency);
    Display(iFrequency);
    
return 0;
}