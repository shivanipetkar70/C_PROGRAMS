#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if((ch>= '0') && (ch <= '9'))
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

    printf("Enter Digit : \n");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("%c It is Digit\n",cValue);
    }
    else
    {
        printf("%c is not a Digit\n",cValue);
    }

    return 0;
}