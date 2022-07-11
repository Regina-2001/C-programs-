/* Program: Accept a number from user and check whether number is even or odd */

/*
  Algorithm
   Start 
    Accept a number as no
	
	Create a variable as ans
	
	Divide the no by 2 
	Store the result in ans
	
	If ans=0
	 number is even
	Otherwise 
	 number is odd
*/

#include "Header.h"

int main()
{
 int iNo=0;
 BOOL iAns=FALSE;
 
 printf("enter the number");
 scanf("%d",&iNo);
 
 iAns=ChkEven(iNo);
 
 if(iAns==TRUE)
 {
   printf("number is even");
 }
 else
 {
   printf("number is odd");
 }
 
 return 0;
}
