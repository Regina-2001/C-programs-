/*
5. Write a recursive program which accept number from user and return its
reverse number.

Input : 523
Output : 325
*/

#include<stdio.h>

int Reverse(int iValue)
{
	int iDigit=0;
	static int iRev=0;

    if(iValue<0)
	{
		iValue=-iValue;
	}
	
	if(iValue>0)
	{
		iDigit=iValue%10;
		iRev=(iRev*10)+iDigit;
		iValue=iValue/10;
		Reverse(iValue);
	}
	return iRev;
}
	

int main()
{
	int iNo=0;
	int iRet=0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iNo);
	
	iRet=Reverse(iNo);
	
	printf("\n%d",iRet);
	
	return 0;
}