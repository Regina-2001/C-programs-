/* Problem statement: Accept number from user and check whether the number is even or odd */

#include "Header.h"

int main()                                     //entry point function
{
int iValue=0;                                 // local variable
BOOLEAN iAns=FALSE;                           //local variable

printf("enter number");
scanf("%d",&iValue);

iAns=ChkEvenOdd(iValue);

if(iAns==TRUE)
{
 printf("Number is Even");
}
else
{
 printf("Number is Odd");
}

return 0;
}
