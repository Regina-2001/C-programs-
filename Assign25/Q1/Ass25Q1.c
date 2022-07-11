                                                                                     /*
 1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char cValue)
{
	if(((cValue>='A')&&(cValue<='Z')) || ((cValue>='a')&&(cValue<='z')))
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
	
	bRet=ChkAlpha(cCh);
	
	if(bRet==TRUE)
	{
		printf("It is a character\n");
	}
	else
	{
		printf("It is not a character\n");
	}
	
	return 0;
}

	