//////////////////////////////////////////////////////////////////////////////////
//
// Function name:  Divide
// Input:          Integer,Integer,address of double
// Output:         Boolean
// Description:    It performs division of two numbers
// Author:         Regina.R.Shinde
// Date :          27 july 2020
///////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOLEAN Divide(int iNo1,int iNo2,double *pData)
{
 double dAns=0;
 
 if(iNo2==0)
 {
   return FALSE;
 }
 
 dAns=(double)iNo1/(double)iNo2;
 
 pData=dAns;

 return TRUE;
}