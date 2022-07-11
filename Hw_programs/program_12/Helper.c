//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name:Count
// Input:        Integer
// Output:       Integer
// Description:  It is used to count the digits of number which are less than 6.
// Author:       Regina.R.Shinde
// Date:         4 july 2020
///////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

int Count(int iValue)
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
   
   if(iDigit<6)
   {
	   iCnt++;
   }
   
   iValue=iValue/10;
 }
  return iCnt;
}
 
