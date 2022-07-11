/*
4.Write a recursive program which display below pattern.

Input:6

Output : A B C D E F
*/

#include<stdio.h>



void Display(int iValue)
{
	static int iNum=1;
	static char ch='A';
	
	if(iNum<=iValue)
	{
		printf("%c\t",ch);
		ch++;
		iNum++;
		Display(iValue);
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