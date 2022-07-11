#include<stdio.h>
#include<stdlib.h>

int ProductOfOdd(int arr[],int iLen)
{ 
  int iCnt=0;
  int iMul=1;
  int iNo=0;
  
  if(arr==NULL)
  {
    return 0;
  }
  
  if(iLen<=0)
  {
    return 0;
  }
  
  for(iCnt=0;iCnt<iLen;iCnt++)
  {
     if((arr[iCnt]%2)!=0)
	 {
	   iMul=iMul*arr[iCnt];
	 }
  }
  
  return iMul;
}
	     


int main()
{
  int iCnt=0;
  int iValue=0;
  int *ptr=NULL;
  int iRet=0;
  
  
  printf("enter the value of N\n");
  scanf("%d",&iValue);
  
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
  
  printf("enter the values\n");
  for(iCnt=0;iCnt<iValue;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  iRet=ProductOfOdd(ptr,iValue);
  
  printf("the multiplication of odd numbers is %d",iRet);
  
  free(ptr);
  
  return 0;
 }