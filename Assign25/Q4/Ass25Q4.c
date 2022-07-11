/*
Accept Character from user and check whether it is small case or not
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char cValue)
{
	if((cValue>='a')&&(cValue<='z'))
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
	
	bRet=ChkSmall(cCh);
	
	if(bRet==TRUE)
	{
		printf("It is small case\n");
	}
	else
	{
		printf("It is not small case\n");
	}
	
	return 0;
}