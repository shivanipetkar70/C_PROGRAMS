#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = CheckSmall(cValue);

    if(bRet == true)
    {
        printf("%c It is small case\n",cValue);
    }
    else
    {
        printf("%c is not a small case\n",cValue);
    }

    return 0;
}