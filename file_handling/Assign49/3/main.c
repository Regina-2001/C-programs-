/*
3. Write a program which accepts file name from user and count number of
white spaces from that file.

Input : Demo.txt

Output : Number of white spaces are 13
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int CountWhitSpaces(char str[])
{
	int iret=0;
	int fd=0;
	int icnt=0;
	char arr[100];
	
	fd=open(str,O_RDONLY);
	
	if(fd==-1)
	{
		printf("\nUnable to open file");
	}
	
	while((iret=read(fd,arr,1))!=0)
	{
		if(*arr==' ')
		{
			icnt++;
		}
	}
	close(fd);
	
	return icnt;
}
	
	
int main()
{
	char name[30];
	int ians=0;
	
	printf("\nEnter the file name\n");
	scanf("%s",name);
	
	ians=CountWhitSpaces(name);
	
	printf("\nThe no of white spaces are %d",ians);
	
	return 0;
}
		