/*
Write a program to accept number from user and return the count of even digits.
*/

#include"Header.h"

int main()
{
 int iNo=0;
 int iAns=0;
 
 printf("enter the number");
 scanf("%d",&iNo);
 
 iAns=CountEven(iNo);
 
 printf("%d",iAns);
 
 return 0;
}
