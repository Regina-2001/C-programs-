/*
2. Write application which accept file name from user and create that file.

Input : Demo.txt

Output : File created successfully.
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char name[20]={'\0'};
	
	printf("\nEnter the file name\n");
	scanf("%s",name);
	
	fd=creat(name,0777);
	
	if(fd==-1)
	{
		printf("\nUnable to create file\n");
	}
	else
	{
		printf("\nFile successfully created with fd %d\n",fd);
	}
	
	close(fd);
	
	return 0;
}
		