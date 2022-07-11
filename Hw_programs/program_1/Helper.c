//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name: MultDigit
// Input:        Integer
// Output:       Integer
// Description:  It is used to multiply digits of numbers
// Author:       Regina.R.Shinde
// Date:         4 july 2020
///////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

int MultDigit(int iValue)
{
 int iDigit=0;
 int iProd=1;
 
 while(iValue!=0)
 {
   iDigit=iValue%10;
   
   if(iDigit==0)
   {
	   break;
   }
   
   iProd=iProd*iDigit;
   
   iValue=iValue/10;
 }
return iProd;
}
 
