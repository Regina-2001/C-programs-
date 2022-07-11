/*
4. Write a program which accept file name which contains information of student and display names of all students whose length of the name is 13.
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
    int ians=0;
	int len=0;
	
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
		len=strlen(obj.name);
		
	     if(len==13)
		 {
			 printf("\t\t%s\n",obj.name);
		 }
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