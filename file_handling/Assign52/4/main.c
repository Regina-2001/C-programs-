/*
4. Write a program which accept file name which contains information of student and display the information based on the class (First class (60 to100), Second class (50 to 60), Pass class (0 to 50)).
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
    int deno,avg;
	
	
	fd=open(str,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	printf("---------------------Students information---------------------------------\n");
	printf("Pass Class\n");
    printf("NAME\t\tMarks\t\tRoll No\n");
	while((iret=read(fd,&obj,sizeof(obj)))!=0)
	{
        if((obj.marks>0)&&(obj.marks<50))
		{
	      printf("%s\t\t%d\t\t%d\n",obj.name,obj.marks,obj.roll);  
		}		
	}
	
	lseek(fd,0,SEEK_SET);
	
	printf("---------------------Students information---------------------------------\n");
	printf("First Class\n");
    printf("NAME\t\tMarks\t\tRoll No\n");
	while((iret=read(fd,&obj,sizeof(obj)))!=0)
	{
        if((obj.marks>60)&&(obj.marks<100))
		{
	      printf("%s\t\t%d\t\t%d\n",obj.name,obj.marks,obj.roll);  
		}		
	}
	
	lseek(fd,0,SEEK_SET);
	
	printf("---------------------Students information---------------------------------\n");
	printf("Second Class\n");
    printf("NAME\t\tMarks\t\tRoll No\n");
	while((iret=read(fd,&obj,sizeof(obj)))!=0)
	{
        if((obj.marks>50)&&(obj.marks<60))
		{
	      printf("%s\t\t%d\t\t%d\n",obj.name,obj.marks,obj.roll);  
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