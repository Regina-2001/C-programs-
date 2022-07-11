/*
Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as  A,B,C,D.Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
*/

#include<stdio.h>
#include<stdlib.h>

void DisplaySch(char cValue)
{
	if((cValue=='A')||(cValue=='a'))
	{
		printf("Your exam is at 7:00Am\n");
	}
	else if((cValue=='B')||(cValue=='b'))
	{
		printf("Your exam is at 8:30Pm\n");
	}
	else if((cValue=='C')||(cValue=='c'))
	{
		printf("Your exam is at 9:20Am\n");
	}
	else if((cValue=='D')||(cValue=='d'))
	{
		printf("Your exam is at 10:30Am\n");
	}
	
}

int main()
{
	char cCh='\0';
		
	printf("enter the character\n");
	scanf("%d",&cCh);
	
	DisplaySch(cCh);
	
	return 0;
}