#include<stdio.h>
#include<stdlib.h>

int Ocurrence(int arr[],int iLen,int iNum)
{
  int iCnt;
  
  if(arr==NULL)
  {
     printf("ERROR");
	 return -1;
  }
  
  if(iLen<=0)
  {
    printf("ERROR");
	return -1;
  }
  
  for(iCnt=0;iCnt<iLen;iCnt++)
  {
     if(arr[iCnt]==iNum)
	 {
                break;
	 }
  }
   
  if(iCnt==iLen)
  {
    return -1;
  }
  else
  {
    return iCnt;
  } 
}

int main()
{
  int iCnt=0;
  int iValue=0;
  int *ptr=NULL;
  int iRet=0;
  int iNo=0;
  
  printf("enter the value of N");
  scanf("%d",&iValue);
  
  printf("enter the number");
  scanf("%d",&iNo);
  
  ptr=(int *)malloc(sizeof(int)*iValue);
  
  if(iValue==0)
  {
     printf("ERROR");
	 return -1;
  }
  
  if(ptr==NULL)
  {
    printf("ERROR");
	return -1;
  }
  
  printf("enter the values");
  for(iCnt=0;iCnt<iValue;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  iRet=Ocurrence(ptr,iValue,iNo);
  
  if(iRet==-1)
  {
    printf("%d not found",iNo);
  }
  else
  {
  printf("the index of %d is %d",iNo,iRet);
  }

  free(ptr);
  
  return 0;
 }