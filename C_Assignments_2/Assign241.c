#include<stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;
BOOL CheckChar(char *str, char cValue)
{
        if(*str == cValue)
        {
            return true;
        }
        else
        {
            return  false;
        }
}
    

int main()
{
    char Arr[20];
    char ch = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    

    printf("Enter the character : \n");
    scanf("%c",&ch);

    bRet = CheckChar(Arr,ch);    
    
    if(bRet == TRUE)
    {
        printf("character found\n");
    }
    else{
       printf("character not found"); 
    }
    return 0;
}