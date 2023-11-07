#include<stdio.h>
 void Pattern(int iNo)
 {
    int icnt = 0;
    const char c = '$';
    const char c1 = '*';
    

    for(icnt=1;icnt<=iNo;icnt++)
    {
       putchar(c);
       putchar(c1);

    }
 }




int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    
    Pattern(iValue);

    return 0;
}