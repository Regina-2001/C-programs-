/*
Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.

Input : Q
Output : q

Input : m
Output : M

Input : 4
Output : 4

Input : %
Output : %
*/

#include<stdio.h>

void Display(char cValue)
{
	if((cValue>=65)&&(cValue<=90))
	{
		printf("%c\n",cValue+32);
	}
	else if((cValue>=97)&&(cValue<=112))
	{
		printf("%c\n",cValue-32);
	}
	else
	{
		printf("%c",cValue);
	}
}


int main()
{
	char cCh='\0';
		
	printf("enter the character\n");
	scanf("%d",&cCh);
	
	Display(cCh);
	
	return 0;
}