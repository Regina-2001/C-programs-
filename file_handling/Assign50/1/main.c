/*
1. Write a program which accept information of students from user and write that information into the file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

struct Student
{
	int roll;
	char name[20];
	int marks;
};

void FileWrite(char *str)
{
	int fd=0;
	struct Student obj;
	int iret=0;
	int i=0;
	int ino=0;
	
	fd=open(str,O_WRONLY);
	
	if(fd==-1)
	{
		printf("\nUnable to open file\n");
		return;
	}
	
	printf("Enter the no of students\n");
	scanf("%d",&ino);
	
	for(i=1;i<=ino;i++)
	{
		printf("Enter the name of student\n");
		scanf(" %[^'\n']s",obj.name);
		
		printf("Enter the Roll no of student\n");
		scanf(" %d",&obj.roll);
		
		printf("Enter the marks of student\n");
		scanf(" %d",&obj.marks);
		
		write(fd,&obj,sizeof(obj));
	}
	
	close(fd);
	
}

void FileRead(char *str)
{
	int fd=0;
	int iret=0;
	struct Student obj;
	
	fd=open(str,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	printf("---------------------Students information---------------------------------\n");
	printf("ROLL NO\t\tNAME\t\tMARKS\n");
	
	while((iret=read(fd,&obj,sizeof(obj)))!=0)
	{
	     printf("%d\t\t%s\t\t%d\n",obj.roll,obj.name,obj.marks);
	}		 
    
	close(fd);
	
}

int main()
{
	char name[20]={'\0'};
	
	printf("\nEnter the file name\n");
	scanf("%s",name);
	
	FileWrite(name);
	
	FileRead(name);
	
	return 0;
}