/*
1. Write a program which accept file name which contains information of student as well as accept name of student and dsplay only information of that student.
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

void FileRead(char *str,char *ch)
{
	int fd=0;
	int iret=0;
	struct Student obj;
    int ians=0;
	
	fd=open(str,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	printf("---------------------Students information---------------------------------\n");
	
	while((iret=read(fd,&obj,sizeof(obj)))!=0)
	{
	     if((strcmp(obj.name,ch))==0)
		 {
			 printf("ROLL NO\t\tNAME\t\tMARKS\n");
			 printf("%d\t\t%s\t\t%d",obj.roll,obj.name,obj.marks);
		 }
	}
    close(fd);
	
}

int main()
{
	char name[20]={'\0'};
	char arr[20];
	
	printf("\nEnter the file name\n");
	scanf("%s",name);
	
	printf("Enter the name of student\n");
	scanf(" %[^'\n']s",arr);
	
	FileRead(name,arr);
	
	return 0;
}