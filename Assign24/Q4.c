#include<stdio.h>
#include<stdlib.h>

void Display(int arr[],int iLen)
{
	int iCnt=0;
	int iNo=0;
	int iCount=0;
	int iDigit=0;
	
	if(arr==NULL)
	{
		return;
	}
	
	if(iLen<=0)
	{
		return;
	}
	printf("\nthe numbers are\n");
	for(iCnt=0;iCnt<iLen;iCnt++)
	{
	   iNo=arr[iCnt];
	   iCount=0;
	   while(iNo!=0)
	    {
			iNo=iNo/10;
			iCount++;
	    }
		if(iCount==3)
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
 
 
 