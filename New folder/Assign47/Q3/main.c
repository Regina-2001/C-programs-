/*
3. Write a recursive program which accept string from user and count number
of small characters.

Input : HElloWOrlD
Output : 5
*/

#include<stdio.h>

int Count(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		str++;
		Count(str);
	}
	return iCnt;
}
	
int main()
{
	char arr[20];
	int iRet=0;
	
	printf("\nEnter the string\n");
	scanf("%[^'\n']s",&arr);
	
	iRet=Count(arr);
	
	printf("\nThe no of small letters are %d",iRet);
	
	return 0;
}