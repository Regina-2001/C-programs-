#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int arr[],int iLen,int iValue1,int iValue2)
{
  int iCnt=0;
  
  if(arr==NULL)
  {
     printf("ERROR");
	 return;
  }
  
  if(iLen<=0)
  {
    printf("ERROR");
	return;
  }
  
  printf("\n");
  for(iCnt=0;iCnt<iLen;iCnt++)
  {
    if((arr[iCnt]>iValue1) && (arr[iCnt]<iValue2))
    {
       printf("%d\t",arr[iCnt]);
    }	   
  }
}

int main()
{
  int iCnt=0;
  int iValue=0;
  int *ptr=NULL;
  int iStart=0;
  int iEnd=0;
  
  printf("enter the value of N\n");
  scanf("%d",&iValue);
  
  printf("enter the range\n");
  scanf("%d%d",&iStart,&iEnd);
  
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
  
  RangeDisplay(ptr,iValue,iStart,iEnd);
  
  
  free(ptr);
  
  return 0;
 }