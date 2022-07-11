/*
1. Write a recursive program which accept number from user and display below
pattern.

Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
*/

#include<stdio.h>

void Display(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	if(iNo>0)
	{
		printf("%d\t*\t",iNo);
		iNo--;
		Display(iNo);
	}
}

int main()
{
	int iNum=0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iNum);
	
	Display(iNum);
	
	return 0;
}
