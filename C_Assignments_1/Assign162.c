#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    //    1       2        3
    for(i = 1; i<= iRow; i++)   // Outer
    {   //    1         2       3 
        for(j = 1, ch1 = 'a',ch2='A'; j <= iCol; j++, ch1++,ch2++)  // Inner
        {
            if((i % 2)==0)
            {
            printf("%c\t",ch1);
            }
            else
            {
            printf("%c\t",ch2);
             
            }
            
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}