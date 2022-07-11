/*
2. Write a recursive program which accept number from user and return
largest digit

Input : 87983
Output : 9
*/

#include<stdio.h>

int MaxDigit(int iNo)
{
	int iDigit=0;
	static int iMax=1;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	if(iNo>0)
	{
		iDigit=iNo%10;
		if(iMax<iDigit)
		{
			iMax=iDigit;
		}
		iNo=iNo/10;
        MaxDigit(iNo);
	}		
	return iMax;
}

int main()
{
	int iNum=0;
    int iRet=0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iNum);
	
	iRet=MaxDigit(iNum);
	
	printf("\nThe largest number is %d",iRet);
	
	return 0;
}