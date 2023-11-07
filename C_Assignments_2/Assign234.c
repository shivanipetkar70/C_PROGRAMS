#include<stdio.h>

void DisplayDigit(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if((str[iCnt] >= '0') && (str[iCnt] <= '9'))
        {
          printf("Digits are %c ",str[iCnt]);
          iCnt++;
          
        }
        
            str++;
      
           
    }
   
}

void main()
{
    char Arr[20];
 

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);  

 

   DisplayDigit(Arr);    // strlenX(100);

    //printf("Number of digits are : %d\n",iRet);

    // return 0;
}