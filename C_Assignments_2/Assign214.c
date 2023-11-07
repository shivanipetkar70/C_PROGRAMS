#include<stdio.h>
#include<stdbool.h>

bool CheckSpecial(char cValue)
{
    if((cValue >= 33) && (cValue <= 47))
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
    char ch = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&ch);

    bRet = CheckSpecial(ch);

    if(bRet == true)
    {
        printf("%c is a special letter\n",ch);
    }
    else
    {
        printf("%c is not a special letter\n",ch);
    }

    return 0;
}