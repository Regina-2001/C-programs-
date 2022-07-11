/*
3. Write generic program to accept N values and search first occurrence of any
specific value.
Input : 10 20 30 10 30 40 10 40 10
Value to search : 40
Output : 6
*/

#include<iostream>
using namespace std;

template <class T>
int FirstOcc(T str[],int size,T ino)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(str[i]==ino)
		{
			break;
		}
	}
	
	if(i==size)
	{
		return -1;
	}
	else
	{
		return i;
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
	
	cout<<"Enter the no\n";
	cin>>ino<int>;
	
	iFreq=FirstOcc(arr<int>,iValue,ino<int>);
	
	cout<<"The first occurrence is at "<<iFreq;
	
	return 0;
}





