//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name:CountEven
// Input:        Integer
// Output:       Integer
// Description:  It is used to count the digits of number which are even.
// Author:       Regina.R.Shinde
// Date:         4 july 2020
///////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

int CountEven(int iValue)
{
 int iDigit=0;
 int iCnt=0;

 if(iValue<0)
 {
  iValue=-iValue;
 }

 while(iValue!=0)
 {
   iDigit=iValue%10;
   
   if((iDigit%2)==0)
   {
	   iCnt++;
   }
   
   iValue=iValue/10;
 }
  return iCnt;
}
 
