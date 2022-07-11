/*
1. Write application which accept file name from user and open that file in read mode.

Input : Demo.txt

Output : File opened successfully.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char arr[20]={'\0'};
	
	printf("\nEnter the file name\n");
	scanf("%s",arr);
	
	fd=open(arr,O_RDWR|O_CREAT,0777);
	
	if(fd==-1)
	{
		printf("\nUnable to open file\n");
	}
	else
	{
		printf("\nFile succesfully opened with fd %d",fd);
	}
	
	close(fd);
	
	return 0;
}