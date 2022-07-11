/*
2. Write a recursive program which display below pattern.

Output : 1 2 3 4 5
*/



#include<stdio.h>

void Display(int iValue)
{
	static int i=1;
	
	if(iValue<0)
	{
		iValue=-iValue;
	}
	
	if(iValue==0)
	{
		printf("\nInvalid number\n");
		return;
	}
	
	if(i<=iValue)
	{
		printf("%d\t",i);
		i++;
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