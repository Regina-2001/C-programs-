/*
1. Write generic program which accept one value and one number from user. Print
that value that number of times on screen.
Input : M 7
Output : M M M M M M M

Input : 11 3
Output : 11 11 11

Input : 3.7 6
Output : 3.7 3.7 3.7 3.7 3.7 3.7
*/

#include<iostream>
using namespace std;

template <class T>
void DisplayPattern(T ino,int freq)
{
	for(int i=0;i<freq;i++)
	{
		cout<<ino<<"\t";
	}
}

template <class T>
T iValue;

int main()
{
	int iFreq=0;
	
	cout<<"Enter the value to be displayed\n";
	cin>>iValue<int>;
	
	cout<<"Enter how many times to display\n";
	cin>>iFreq;
	
	DisplayPattern(iValue<int>,iFreq);
	
	return 0;
}





