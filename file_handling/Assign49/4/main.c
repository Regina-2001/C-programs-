/*
4. Write a program which accepts file name and one character from user and
count number of occurrences of that characters from that file.

Input : Demo.txt ‘M’

Output : Frequency of M is 7
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int Count(char str[],char ch)
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
		if(*arr==ch)
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
	char key='\0';
	
	printf("Enter the character\n");
	scanf("%c",&key);
	
	
	printf("\nEnter the file name\n");
	scanf("%s",name);
	
	ians=Count(name,key);
	
	printf("\n%d",ians);
	
	return 0;
}
		