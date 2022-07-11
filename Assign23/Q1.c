#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
 
typedef int BOOL;

BOOL Check(int arr[],int iSize,int iNum)
{
  int iCnt=0;
  int iNumber=0;
  
  if(arr==NULL)
  {
   return -1;
  }
  
  if(iSize<=0)
  {
    return -1;
  }
  
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
	iNumber=arr[iCnt];
    if(iNumber==iNum)
	{
	   return TRUE;
	}
  }
  
}

int main()
{
   int iCnt=0;
   int iValue=0;
   int *ptr=NULL;
   int iNo=0;
   BOOL bRet=0;
   
   printf("enter the value of n");
   scanf("%d",&iValue);
   
   printf("enter the no");
   scanf("%d",&iNo);
   
   if(iValue==0)
   {
     printf("Error:invalid");
	 return -1;
   }
   
   ptr=(int *)malloc(sizeof(int)*iValue);
   
   if(ptr==NULL)
   {
      printf("Error:Invalid");
	  return -1;
   }
  
  printf("enter the values \n");
  for(iCnt=0;iCnt<iValue;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  bRet=Check(ptr,iValue,iNo);
  
  if(bRet==1)
  {
     printf("TRUE");
  }
  else
  {
    printf("FALSE");
  }
  
  free(ptr);
  
  return 0;
  
}