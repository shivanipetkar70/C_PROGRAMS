#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
     
    for(icnt=0; icnt<iNo; icnt++) 
    { 
       printf("%d\t *\t",icnt);
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