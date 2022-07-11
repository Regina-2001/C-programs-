/*
4. Write application which accept file name from user and display size of file.

Input : Demo.txt

Output : File size is 56 bytes
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void DisplaySize(char str[])
{
	int fd=0;
	int icnt=0;
	char arr[100];
	
	fd=open(str,O_RDONLY);
	
	if(fd==-1)
	{
		printf("\nUnable to open file");
	}
	
	icnt=lseek(fd,0,SEEK_END);
	
	printf("\nThe size of file is %d bytes",icnt);
	
	close(fd);
}
	
	
int main()
{
	char name[30];
	int ians=0;
	
	printf("\nEnter the file name\n");
	scanf("%s",name);
	
	DisplaySize(name);
	
	return 0;
}
		