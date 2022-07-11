/*
Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
*/


#include<stdio.h>

void Display(char cValue)
{
	int iCnt=0;
	
	if((cValue>=65)&&(cValue<=90))
	{
		for(iCnt=cValue;iCnt<='Z';iCnt++)
		{
			printf("%c\t",iCnt);
		}
		
	}
	else if((cValue>=97)&&(cValue<=112))
	{
		for(iCnt=cValue;iCnt>='a';iCnt--)
		{
			printf("%c\t",iCnt);
		}
	}
	else
	{
		return;
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