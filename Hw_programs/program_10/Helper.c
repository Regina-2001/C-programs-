/////////////////////////////////////////////////////////////////////////////////
//
// Function name: ChkEven
// Input:         Integer
// Output:        Boolean
// Description:   It is used to check whether the number is even or odd
// Author:        Regina.R.Shinde
// Date:          26 july 2020
//////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkEven(int iValue)
{
 int iRet=0;
 
 iRet=iValue%2;
 
 if(iRet==0)
 {
   return TRUE;
 }
 else
 {
   return FALSE;
 }
}
