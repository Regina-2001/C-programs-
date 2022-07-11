#include<stdio.h>
#include<stdlib.h>

void Display(int arr[],int iLen)
{
	int iCnt=0;
	int iNo=0;
	int iSum=0;
	int iDigit=0;
	
	if(arr==NULL)
	{
		return;
	}
	
	if(iLen<=0)
	{
		return;
	}
	
	for(iCnt=0;iCnt<iLen;iCnt++)
	{
		iNo=arr[iCnt];
		iSum=0;
	   while(iNo!=0)
	    {
			iDigit=iNo%10;
		    iSum=iSum+iDigit;
			iNo=iNo/10;
	    }
		printf("the summation of digits of %d is %d\n",arr[iCnt],iSum);
	}
}
	
		
int main()
{
  int iCnt=0;
  int iValue=0;
  int *ptr=NULL;
  
 
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
  
  Display(ptr,iValue);
  
  free(ptr);
  
  return 0;
 }
 
 
 