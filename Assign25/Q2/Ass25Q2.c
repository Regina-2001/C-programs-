/*
Accept Character from user and check whether it is capital or not
(A-Z).
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCap(char cValue)
{
		
	if((cValue>='A')&&(cValue<='Z'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cCh='\0';
	BOOL bRet=FALSE;
	
	printf("enter the character\n");
	scanf("%c",&cCh);
		
	bRet=ChkCap(cCh);
	
	if(bRet==TRUE)
	{
		printf("The character is capital\n");
	}
	else
	{
		printf("The character is not capital\n");
	}
	
	return 0;
}
