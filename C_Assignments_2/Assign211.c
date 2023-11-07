#include<stdio.h>

int main()
{
    int iCnt = 0;

    printf("ASCII Table\n");
    
    for(iCnt = 0; iCnt <= 225; iCnt++)
    {
        printf("%c\t%d\n",iCnt,iCnt);
    }
    printf("\n");
    return 0;
}