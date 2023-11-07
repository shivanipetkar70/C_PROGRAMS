#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkVowels(char *str)
{
while(*str != '\0')
{
    if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
    {
    return true;
   
    }
    else
    {
       return false;
    }
}
}

int main()
{
    char Arr[10];
    BOOL bRet = FALSE;
    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowels(Arr);
   if(bRet==TRUE)
    {
        printf("Contains vowels");
    }
    else
    {
        printf("There is no vowels");
    }
    return 0;
}
    

