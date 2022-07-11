/*
3. Write a program which accept file name which contains information of student and display the average marks of students.
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
    int avg;
	
	
	fd=open(str,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return;
	}
	 
	
	printf("---------------------Students information---------------------------------\n");
    printf("NAME\t\tMarks\t\tRoll No\t\tAverage marks\n");
	while((iret=read(fd,&obj,sizeof(obj)))!=0)
	{
		avg=obj.marks/8;
	    printf("%s\t\t%d\t\t%d\t\t%d\n",obj.name,obj.marks,obj.roll,avg);   	 
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