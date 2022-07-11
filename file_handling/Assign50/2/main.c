/*
2. Write a program which read all the information of students from the file.
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
	
	FileRead(name);
	
	return 0;
}