//////////////////////////////////////////////////////////////////////////////////
//
// Function name:  Divide
// Input:          Integer,Integer
// Output:         double
// Description:    It performs division of two numbers
// Author:         Regina.R.Shinde
// Date :          27 july 2020
///////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

double Divide(int iNo1,int iNo2)
{
 double dAns=0;
 
 if(iNo2==0)
 {
   return 0.0;
 }
 
 dAns=(double)iNo1/(double)iNo2;
 
 return dAns;
}