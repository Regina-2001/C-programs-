/*
5.Write a recursive program which display below pattern.

Output : a b c d e f
*/

#include<stdio.h>

void Display(char ch)
{
	static char cValue='a';
	
	if(cValue<=ch)
	{
		printf("%c\t",cValue);
		cValue++;
		Display(ch);
	}
}

int main()
{
	char ch='\0';
	
	printf("\nEnter the character\n");
	scanf("%c",&ch);
	
	Display(ch);
	
	return 0;
}