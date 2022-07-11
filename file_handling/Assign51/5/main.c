/*
5. Write a program which accept file name which contains information of student and marks. Display all students having that marks.
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

void FileRead(char *str,int inum)
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
	 printf("\t\tNAME\t\t\n");
	while((iret=read(fd,&obj,sizeof(obj)))!=0)
	{
		if(obj.marks==inum)
		 {
			 printf("\t\t%s\n",obj.name);
		 }
	}

   
    
	close(fd);
	
}

int main()
{
	char name[20]={'\0'};
	int ino=0;
	
	printf("\nEnter the file name\n");
	scanf("%s",name);
	
	printf("Enter the marks");
	scanf("%d",&ino);
	
	FileRead(name,ino);
	
	return 0;
}