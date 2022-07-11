/* 1. Write a recursive program which display below pattern.
    
Output : * * * * *
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
		printf("*\t");
		iValue--;
		Display(iValue);
	}
}

int main()
{
	int iNo=0;
	
	printf("\nEnter the value\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}