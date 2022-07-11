/*
5. Write a program which accepts file name and one count from user and read
that number of characters from starting position.

Input : Demo.txt 12

Output : Display first 12 characters from Demo.txt
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


void Display(char str[],int inum)
{
	int iret=0;
	int fd=0;
	char arr[100];
	
	fd=open(str,O_RDONLY);
	
	if(fd==-1)
	{
		printf("\nUnable to open file");
	}
	
	while((iret=read(fd,arr,100))!=0)
	{
		write(1,arr,inum);
	}
	close(fd);
	
}
	
	
int main()
{
	char name[30];
	int ino=0;
	
	printf("\nEnter the no");
	scanf("%d",&ino);
	
	printf("\nEnter the file name\n");
	scanf("%s",name);
	
	Display(name,ino);
	
	return 0;
}
		