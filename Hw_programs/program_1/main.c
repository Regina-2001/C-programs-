/*
Write a program to accept number from user and return multiplication of all digits
*/

#include"Header.h"

int main()
{
 int iNo=0;
 int iAns=0;
 
 printf("enter the number");
 scanf("%d",&iNo);
 
 iAns=MultDigit(iNo);
 
 printf("the multiplication is %d",iAns);
 
 return 0;
}
