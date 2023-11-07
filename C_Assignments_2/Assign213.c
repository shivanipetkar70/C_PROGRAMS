#include<stdio.h>
#include <ctype.h>

void Display(char ch)
{
  char c = 0;
if (isupper(ch))
{
  for(c=ch; c <= 'Z'; c++)
  {
    printf("%c\n",c);
  }
}
else
{
  for(c=ch; c >= 'a'; c--)
  {
    printf("%c\n",c);
  }
}
    
}
  
int main()
{
    char cValue = 0;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

 Display(cValue);

 return 0;
}