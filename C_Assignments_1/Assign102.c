#include<stdio.h>  // IO 
#include<stdlib.h>  // MEMORY MANAGEMENT
//void Demo(int*Arr,int iLength)
int Frequency (int Arr[],int iLength)
{
    int icnt = 0;
    int iEcount = 0 ;
    int iOcount = 0 ;
    int iDiff=0;
    int iEven = 0;
    int iOdd = 0;
    for(icnt=0;icnt<iLength;icnt++)
{
    if((Arr[icnt])%2==0)
    {
        iEven = Arr[icnt];
        iEcount++;
      

    }
    
   
}

 for(icnt=0;icnt<iLength;icnt++)
{
    if((Arr[icnt])%2!=0)
    {
        iOdd = Arr[icnt];
        iOcount++;
      

    }
    
   
}

return iDiff = iEcount - iOcount;
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
iRet=Frequency(p,iSize);  // Demo(400,4);
printf("Frequency  is %d\n",iRet);

//step6:Dealloacte the memory of array
free(p);

return 0;  // Return success to OS

}