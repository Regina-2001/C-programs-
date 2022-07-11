/*
4. Write a recursive program which accept number from user and return
smallest digit

Input : 87983
Output : 3
*/

#include<stdio.h>

int Min(int iValue)
{
	int iDigit=0;
	static int iMin=9;
	
	if(iValue<0)
	{
		iValue=-iValue;
	}
	
	if(iValue>0)
	{
		iDigit=iValue%10;
		if(iDigit<iMin)
		{
			iMin=iDigit;
		}
		iValue=iValue/10;
		Min(iValue);
	}
	return iMin;
}

int main()
{
	int iNo=0;
	int iRet=0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iNo);
	
	iRet=Min(iNo);
	
	printf("\nThe smallest digit is %d",iRet);
	
	return 0;
}