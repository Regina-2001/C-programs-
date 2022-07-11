/*
1. Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/

#include<stdio.h>

void Display()
{
	int iCnt=0;
	
	printf("Decimal\tChar\tHex\tOctal");
	for(iCnt=0;iCnt<=127;iCnt++)
	{
		printf("%d\t%c\t%X\t%o\n");
	}
}

int main()
{

	Display();
	
	return 0;
}