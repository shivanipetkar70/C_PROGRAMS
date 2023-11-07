#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if((ch >= 'a') && (ch <= 'z')||(ch>= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == true)
    {
        printf("%c It is character\n",cValue);
    }
    else
    {
        printf("%c is not a character\n",cValue);
    }

    return 0;
}