#include<stdio.h>

int CountCapital(char*str)
{
    int icnt = 0;
   
    while(*str != '\0')
    {
        if((*str>='A') && (*str<='Z') )
        {
             
              icnt++;
        }
       
        str++;
    }
    return icnt;
}



int main()
{
   char Arr[20];
  int iRet = 0;
 
   
   printf("Enter string: \n");
   scanf("%[^'\n']s",Arr);
iRet = CountCapital(Arr);
printf("Number ofsmall letter is :%d\n",iRet);
return 0;
}