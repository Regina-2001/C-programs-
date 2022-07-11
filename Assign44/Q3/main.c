/*
3.Write a recursive program which display below pattern.

Output : 5 4 3 2 1
*/

#include<stdio.h>

void Display(int iValue)
{
	if(iValue<0)
	{
		iValue=-iValue;
	}
	
		
	if(iValue>0)
	{
		printf("%d\t",iValue);
		iValue--;
		Display(iValue);
	}
}

int main()
{
	int iNo=0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}