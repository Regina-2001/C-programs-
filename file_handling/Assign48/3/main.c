/*
3. Write application which accept file name from user and read all data from that file
and display contents on screen.

Input : Demo.txt

Output : Display all data of file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void Display(char str[])
{
	int fd=0;
	int iret=0;
	char arr[100]={'\0'};
	
	fd=open(str,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
	}
	
	
	while((iret=read(fd,arr,100))!=0)
	{
		write(1,arr,iret);
	}
	
	close(fd);
	
}
	
	
int main()
{
	char name[30];
	
	printf("\nEnter the file name\n");
	scanf("%s",name);
	
	Display(name);
	
	return 0;
}
		