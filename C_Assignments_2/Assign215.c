#include<stdio.h>


void Display(char cValue)
{
    if((cValue >= 65) && (cValue <= 90) || (cValue >= 41) && (cValue <= 59))
   {
       printf("ASCII value in Decimal is %d\n",cValue );
       printf("ASCII value in Decimal is %x\n",cValue );
       
   }
   
}

int main()
{
    char ch = '\0';
    
    printf("Enter character : \n");
    scanf("%c",&ch);

    Display(ch);

    return 0;
}