#include<stdio.h>  // IO 
#include<stdlib.h>  // MEMORY MANAGEMENT
//void Demo(int*Arr,int iLength)
int LastOcc(int Arr[],int iLength,int iNo)
{
    //Step1:perform the operation on array
    
    int iCount =0;
    int icnt=0;// LOOP COUNTER

    for(icnt=iLength-1;icnt>=0;icnt--)
{
    if((Arr[icnt])== iNo)
    {
        break;
    }
    if(icnt == iLength)
    {
        return -1;
    }
    
}
return icnt;
}
int main()  // ENTERY POINT 
{
int iSize = 0;// TO STORE SIZE OF ARRAY
int *p = NULL;// TO STORE THE ADDRESS OF ARRAY
int icnt=0;// LOOP COUNTER
int iRet=0 , iValue = 0;
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
iRet=LastOcc(p,iSize,iValue);  // Demo(400,4);
printf("Frequency of number is %d\n",iRet);

if(iRet == -1)
{
    printf("There is no such element\n");
}
else 
{
     printf("%d is occured at index %d\n",iValue,iRet);
}


//step6:Dealloacte the memory of array
free(p);

return 0;  // Return success to OS

}