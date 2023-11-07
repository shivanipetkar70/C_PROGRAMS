#include<stdio.h>

int Diffrence (char *str)
{
   int icnt1 = 0;
   int icnt2 = 0;
   int idiff1 = 0;
   int idiff2= 0;

   while(*str != '\0')
    {
        if((*str>='a') && (*str<='z') )
        {
             
              icnt1++;
        }
        else if((*str>='A') && (*str<='Z') )
        {
             
             icnt2++;
        }

       
        str++;
    }
    return icnt1 - icnt2;
}


int main()
{
  
char Arr[20];
int iRet = 0;
 
printf("Enter string: \n");
scanf("%[^'\n']s",Arr);
iRet = Diffrence(Arr);
printf("%d\n",iRet);
return 0;
}