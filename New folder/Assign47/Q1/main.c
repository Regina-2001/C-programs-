/*
1. Write a recursive program which accept string from user and count white
spaces.

Input : HE llo WOr lD
Output : 3
*/

#include<stdio.h>

int CountWhiteSpaces(char *str)
{
	static int iCnt=0;
	
	if(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
		CountWhiteSpaces(str);
	}
	return iCnt;
}

int main()
{
	char arr[30];
	int iRet=0;
	
	printf("\nEnter the string\n");
	scanf("%[^'\n']s",arr);
	
	iRet=CountWhiteSpaces(arr);
	
	printf("\nWhite spaces are %d",iRet);
	
	return 0;
}