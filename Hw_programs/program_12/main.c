/*
Write a program to accept number from user and return the count of frequency of such a digits which are less than 6.
*/

#include"Header.h"

int main()
{
 int iNo=0;
 int iAns=0;
 
 printf("enter the number");
 scanf("%d",&iNo);
 
 iAns=Count(iNo);
 
 printf("%d",iAns);
 
 return 0;
}
