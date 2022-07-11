/*
4. Write a recursive program which accept number from user and return its
factorial.

Input : 5
Output : 120
*/

#include<stdio.h>

int Factorial(int iNum)
{
	static int iFac=1;
	static int i=1;
	
	if(iNum<0)
	{
		iNum=-iNum;
	}
	
	if(i<=iNum)
	{
		iFac=iFac*i;
		i++;
		Factorial(iNum);
	}
	return iFac;
}

int main()
{
	int iNo=0;
	int iRet=0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iNo);
	
	iRet=Factorial(iNo);
	
	printf("\nFactorial is %d",iRet);
	
	return 0;
}