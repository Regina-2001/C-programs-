/*
5. Write generic program to accept N values and reverse the contents.
Input : 10 20 30 10 30 40 10 40 10
Output : 10 40 10 40 30 10 30 20 10
*/

#include<iostream>
using namespace std;

template <class T>
void Reverse(T str[],int size)
{
	int istart=0,iend=size;
	T temp;
	
	for(istart=0,iend=size-1;istart<=iend;istart++,iend--)
	{
		temp=str[istart];
		str[istart]=str[iend];
		str[iend]=temp;
	}
	
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
	
	Reverse(arr<int>,iValue);
	
	cout<<"The elements after reversing are\n";
	for(int i=0;i<iValue;i++)
	{
		cout<<arr<int>[i]<<"\t";
	}
	
	return 0;
}





