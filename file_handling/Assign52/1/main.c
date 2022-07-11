/*
1. Write a program which accept file name which contains information of student and display the information of student having highest marks.
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
    int iMax=0;
	int iRoll=0;
	char iName[20];
	
	
	fd=open(str,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	while((iret=read(fd,&obj,sizeof(obj)))!=0)
	{
		if(obj.marks>iMax)
		 {
			 strcpy(iName,obj.name);
			 iRoll=obj.roll;
			iMax=obj.marks;
		 }
	}
	 
	
	 
	printf("---------------------Students information---------------------------------\n");
	 printf("NAME\t\tMarks\t\tRoll No\n");
     printf("%s\t\t%d\t\t%d\n",iName,iMax,iRoll);   	 
	
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