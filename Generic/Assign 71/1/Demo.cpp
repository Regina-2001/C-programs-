/*
1.Write generic program to multiply two numbers.
*/

#include<iostream>
using namespace std;

template<class T>

T Multiply(T no1, T no2)
{
   T iAns=1;
   
   iAns = no1*no2;
   
    return iAns;

}


int main()
{
   int iValue1,iValue2,iRet;
   
   cout<<"Enter the numbers\n";
   cin>>iValue1>>iValue2;
   
   iRet = Multiply(iValue1,iValue2);
   
   cout<<iRet<<"\n";
   
   //float
   
   float fValue1,fValue2,fRet;
   
   cout<<"Enter the numbers\n";
   cin>>fValue1>>fValue2;
   
   fRet = Multiply(fValue1,fValue2);
   
   cout<<fRet<<"\n";
   
   //double
   
   double dValue1,dValue2,dRet;
   
   cout<<"Enter the numbers\n";
   cin>>dValue1>>dValue2;
   
   dRet = Multiply(dValue1,dValue2);
   
   cout<<dRet<<"\n";
   
   return 0;
}