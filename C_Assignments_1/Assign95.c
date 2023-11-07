#include<stdio.h>  // IO 
#include<stdlib.h>  // MEMORY MANAGEMENT
//void Demo(int*Arr,int iLength)
void Display(int Arr[],int iLength)
{
    //Step1:perform the operation on array
    
   
    
    int icnt=0;// LOOP COUNTER
    for(icnt=0;icnt<iLength;icnt++)
{
    if((Arr[icnt])%11==0 )
    {
       printf("%d\n",Arr[icnt]);
    }
    
    
}

}
int main()  // ENTERY POINT 
{
int iSize = 0;// TO STORE SIZE OF ARRAY
int *p = NULL;// TO STORE THE ADDRESS OF ARRAY
int icnt=0;// LOOP COUNTER
int iRet=0;
//Step1:Accept the number of elements from user
printf("Enter the number of elements:\n");
scanf("%d",&iSize);

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
 Display(p,iSize);

//step6:Dealloacte the memory of array
free(p);

return 0;  // Return success to OS

}