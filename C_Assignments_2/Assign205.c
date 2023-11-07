#include<stdio.h>


void DisplaySchedule(char chDiv)
{
      
        
   switch (chDiv)
   {
    case'A':
    case'a':
    printf("Your exam is at 7\n");
    break;
    case'B':
    case'b':
    printf("Your exam is at 8:20");
    break;
    case'C':
    case'c':
    printf("Your exam is at 9:30");
    break;
    case'D':
    case'd':
    printf("Your exam is at 10:30");
    break;

    default:
    printf("Invalid Division\n");
   }    
    
}



int main()
{
    char cValue = '\0';
  

    printf("Enter character : \n");
    scanf("%c",&cValue);

     DisplaySchedule(cValue);

    
    return 0;
}