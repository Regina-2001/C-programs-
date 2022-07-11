/*
4.Write a recursive program which display below pattern.

Output : A B C D E F
*/

#include<stdio.h>



void Display(char cValue)
{
	static char ch='A';
	
	if(ch<=cValue)
	{
		printf("%c\t",ch);
		ch++;
		Display(cValue);
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