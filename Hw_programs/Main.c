#include<stdio.h>
#include<stdlib.h>

int SumNNumbers(int arr[],int iSize)
{
  int iCnt=0;
  int iSumEven=0;  
  int iSumOdd=0;
  
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
	if((arr[iCnt]%2)==0)
	{
      iSumEven=iSumEven+arr[iCnt];
	}
	else
	{
		iSumOdd=iSumOdd+arr[iCnt];
	}
	
  }
  return iSumEven-iSumOdd;
}

int main()
{
 int iCnt=0;
 int iRet=0;
 int iValue=0;
 int *ptr=NULL;
 
 printf("enter the value of N");
 scanf("%d",&iValue);
 
 ptr=(int *)malloc((sizeof(int))*iValue);
 
 printf("enter the numbers");
 for(iCnt=0;iCnt<iValue;iCnt++)
 {
   scanf("%d",&ptr[iCnt]);
 }
 
 iRet=SumNNumbers(ptr,iValue);
 
 printf("the addition of N numbers is %d",iRet);
 
 return 0;
}