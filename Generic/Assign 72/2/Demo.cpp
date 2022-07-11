/*
2. Write generic program to accept N values and count frequency of any specific
value.
Input : 10 20 30 10 30 40 10 40 10
Value to check frequency : 10
Output : 4
*/

#include<iostream>
using namespace std;

template <class T>
int CountFreq(T str[],int size,T ino)
{
	int icnt=0;
	for(int i=0;i<size;i++)
	{
		if(str[i]==ino)
		{
			icnt++;
		}
	}
	return icnt;
}

template <class T>
T arr[20];

template <class T>
T ino;

int main()
{
	int iFreq=0;
	int iValue=0;
	
	cout<<"Enter the number of elements\n";
	cin>>iValue;
	
	cout<<"Enter the elements\n";
	for(int i=0;i<iValue;i++)
	{
		cin>>arr<int>[i];
	}
	
	cout<<"Enter the no\n";
	cin>>ino<int>;
	
	iFreq=CountFreq(arr<int>,iValue,ino<int>);
	
	cout<<"The Frequency is "<<iFreq;
	
	return 0;
}





