/////////////////////////////////////////////////////////////////////
//
// Function name: ChkEvenOdd
// parameters:    Integer
// Return value:  Integer
// Description:   It is used to check whether a number is even or odd
// Author:        Regina.R.Shinde
// Date:          20 july 2020
/////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOLEAN ChkEvenOdd(int iNo)
{
 int iResult=0;
 
 iResult=iNo%2;
 
 if(iResult==1)
 {
  return FALSE;
 }
 else
 {
  return TRUE;
 }
}
