#include<stdio.h>  // IO 
#include<stdlib.h>  // MEMORY MANAGEMENT
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
//void Demo(int*Arr,int iLength,int iNo)
BOOL Check (int Arr[],int iLength,int iNo)
{
    int icnt =0;
    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt] == iNo)
        {
            return true;
        }
       
    }
return false;
}


int main()  // ENTERY POINT 
{
int iSize = 0;// TO STORE SIZE OF ARRAY
int *p = NULL;// TO STORE THE ADDRESS OF ARRAY
int icnt=0;// LOOP COUNTER
int iRet=0,iValue=0;
BOOL bRet = FALSE;
//Step1:Accept the number of elements from user
printf("Enter the number of elements:\n");
scanf("%d",&iSize);

printf("Enter the number:\n");
scanf("%d",&iValue);
//Step2:Allocate the memory dynamically
p =(int*)malloc(iSize*sizeof(int));
if(p == NULL)
{
    printf("unable to alloacte memory");
    return -1;
}
//Step3:Accept the values from user
printf("Enter the  elements:\n");
for(icnt=0;icnt<iSize;icnt++)
{
    scanf("%d",&p[icnt]);
}

printf("Elements of array are:\n");
for(icnt=0;icnt<iSize;icnt++)
{
    printf("%d\n",p[icnt]);
}

//Step4:pass the array to the function 
bRet=Check(p,iSize,iValue);  // Demo(400,4);

if(bRet==TRUE)
{
    printf("1");
}
else 
{
    printf("-1");
}


//step6:Dealloacte the memory of array
free(p);

return 0;  // Return success to OS

}