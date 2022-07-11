/*
2. Write a recursive program which accept number from user and return
summation of its digits.

Input : 879
Output : 24
*/

#include<stdio.h>

int SumOfDigits(int iNum)
{
	int iDigit=1;
	static int iSum=0;
	
	if(iNum<0)
	{
		iNum=-iNum;
	}
	
	if(iNum>0)
	{
		iDigit=iNum%10;
		iSum=iSum+iDigit;
		iNum=iNum/10;
		SumOfDigits(iNum);
	}
	
	return iSum;
}
	

int main()
{
	int iNo=0,iRet=0;
	
	printf("\Enter the number\n");
	scanf("%d",&iNo);
	
	iRet=SumOfDigits(iNo);
	
	printf("\nThe sum of digits is : %d",iRet);
	
	return 0;
}