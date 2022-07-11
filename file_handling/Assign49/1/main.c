/*
1. Write a program which accepts file name from user and count number of
capital characters from that file.

Input : Demo.txt

Output : Number of capital characters are 23
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int CountCap(char str[])
{
	int i=0,iret=0;
	int fd=0;
	int icnt=0;
	char arr[100];
	
	fd=open(str,O_RDONLY);
	
	if(fd==-1)
	{
		printf("\nUnable to open file");
	}
	
	while((iret=read(fd,arr,sizeof(arr)))!=0)
	{
		for(i=0;i<iret;i++)
		{
			if((arr[i]>='A')&&(arr[i]<='Z'))
			{
			icnt++;
			}
		}
	}
	close(fd);
	
	return icnt;
}
	
	
int main()
{
	char name[30];
	int ians=0;
	
	printf("\nEnter the file name\n");
	scanf("%s",name);
	
	ians=CountCap(name);
	
	printf("\nThe no of capital letters are %d",ians);
	
	return 0;
}
		