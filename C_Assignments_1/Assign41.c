#include<stdio.h>
#include<string.h>

int main()
{
    char Name[30];

    printf("please Enter full Name:\n");
    scanf("%[^\n]s",&Name);
    printf("Your name is %s",Name);

    return 0;
}