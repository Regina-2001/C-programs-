/*
Write a program to accept number from user and count frequency of 2 in it.
*/

#include"Header.h"

int main()
{
 int iNo=0;
 int iAns=0;
 
 printf("enter the number");
 scanf("%d",&iNo);
 
 iAns=CountTwo(iNo);
 
 printf("%d",iAns);
 
 return 0;
}
