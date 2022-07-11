/* Program to divide two numbers */

/* 
 Algorithm
  Start 
  
  Create two variables as Value1 and Value2 and initialize them
  
  Create one variable as result
  
  Perform divsion of Value1 and Value2 
  Store the result in result 

  return the value from result 
 Stop
*/

#include "Header.h"
int main()
{
 int iValue1=0;
 int iValue2=0;
 
 double dResult=0.0;

 printf("enter the first number");
 scanf("%d",&iValue1);
 
 printf("enter the second number");
 scanf("%d",&iValue2);
 
 dResult=Divide(iValue1,iValue2);

 printf("the division is %lf",dResult);

 return 0;
}
 