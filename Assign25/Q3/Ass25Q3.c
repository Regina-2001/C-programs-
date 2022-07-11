/*
Accept Character from user and check whether it is digit or not
(0-9).
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char cValue)
{
	if((cValue>='0')&&(cValue<='9'))
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
	scanf("%d",&cCh);
	
	bRet=ChkDigit(cCh);
	
	if(bRet==TRUE)
	{
		printf("It is a digit\n");
	}
	else
	{
		printf("It is not a digit\n");
	}
	
	return 0;
}