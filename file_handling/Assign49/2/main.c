/*
2. Write a program which accepts file name from user and count number of
small characters from that file.

Input : Demo.txt

Output : Number of small characters are 21
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int CountSmall(char str[])
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
		if((*arr>='a')&&(*arr<='z'))
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
	
	ians=CountSmall(name);
	
	printf("\nThe no of small letters are %d",ians);
	
	return 0;
}
		