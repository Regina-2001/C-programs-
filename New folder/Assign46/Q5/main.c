/*
5. Write a recursive program which accept number from user and return its
product of digits.

Input : 523
Output : 30
*/

#include<stdio.h>

int ProdOFDigits(int iNum)
{
	int iDigit=0;
	static int iProd=1;
	
	if(iNum<0)
	{
		iNum=-iNum;
	}
	
	if(iNum>0)
	{
	    iDigit=iNum%10;
		if(iDigit==0)
		{
			iDigit=1;
		}
		iProd=iProd*iDigit;
		iNum=iNum/10;
        ProdOFDigits(iNum);
	}		
	
	return iProd;
}

int main()
{
	int iNo=0,iRet=0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iNo);
	
	iRet=ProdOFDigits(iNo);
	
	printf("\nThe product of digits is %d",iRet);
	
	return 0;
}