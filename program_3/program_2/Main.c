/* Accept two numbers from user and return its addition */

/*

Algorithm
 
  Start 
   Accept first number as no1
   Accept second number as no2
   
   Create one variable as ans
    
   Perform addition of no1 and no2
   Store the Result in ans 
  
   return the value from ans
  Stop

*/

#include"Header.h"

int main()
{
	int iNo1=0,iNo2=0,iAns=0;
	
	printf("enter the first no");
	scanf("%d",&iNo1);
	
	printf("enter the second no");
	scanf("%d",&iNo2);
	
	iAns=Addition(iNo1,iNo2);
	
	printf("the addition of two numbers is %d",iAns);
	
	return 0;
}