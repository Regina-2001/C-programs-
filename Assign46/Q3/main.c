/*
3. Write a recursive program which accept string from user and count number
of characters.

Input : Hello
Output : 5
*/

#include<stdio.h>

int CountChar(char *str)
{
	static int iCnt=0;
	
	if(*str!='\0')
	{
		if(((*str>='A')&&(*str<='Z')) || ((*str>='a')&&(*str<='z')))
        {
			iCnt++;
		}
		str++;
		CountChar(str);
	}
	return iCnt;
}
int main()
{
	char arr[30];
	int iRet=0;
	
	printf("\nEnter the string\n");
	scanf("%[^'\n']s",arr);
	
	iRet=CountChar(arr);
	
	printf("\nThe no of characters are %d\n",iRet);
	
	return 0;
}