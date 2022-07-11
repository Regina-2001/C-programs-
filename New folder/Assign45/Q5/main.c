/*
5.Write a recursive program which display below pattern.


Output : a b c d e f
*/

#include<stdio.h>

void Display(int iNum)
{
	static char cValue='a';
	static int iValue=1;
	
	if(iValue<=iNum)
	{
		printf("%c\t",cValue);
		cValue++;
		iValue++;
		Display(iNum);
	}
}

int main()
{
	int iNo=0;
	
	printf("\nEnter the Number\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}