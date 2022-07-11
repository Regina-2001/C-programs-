/*
3. Write generic program to accept N values from user and return addition of that
values.
*/


#include<iostream>
using namespace std;

template<class T>
class Array
{
   public:
     T *Arr;
     int size;
   public:
 
   Array(int value = 10)
  { 
      cout<<"Inside Connstructor\n";
      this->size = value;
      this->Arr = new T[size];
  }
  
  Array(Array &ref)
  {
        cout<<"Inside copy connstructor\n";
        this->size = ref.size;
        this->Arr = new T[this->size];
        for(int i = 0;i<size;i++)
        {
             this->Arr[i] = ref.Arr[i];
        }
   }

  ~Array()
  {
        cout<<"Inside Destructor\n";
        delete []Arr;
   }
   
   
   void Accept()
  {
        cout<<"Please enter the values\n";
       for(int i = 0;i<this->size;i++)
       {
           cin>>Arr[i];
        }
  }

   void Display()
  {
          cout<<"Elements are\n";
         for(int i = 0;i<this->size;i++)
         {
                 cout<<Arr[i]<<" ";
         }
         cout<<"\n";
   }
   
   T SumAll()
   {
	   T iSum=0;
	   
	   for(int i = 0;i<this->size;i++)
         {
                 iSum=iSum+Arr[i];
         }
		 
		 return iSum;
   }
};


int main()
{
	int ino=0;
	
	    cout<<"Enter how many elements";
		cin>>ino;
		
        Array<int> sobj1(ino);
        sobj1.Accept();
        sobj1.Display();
        
		cout<<"The sum of elements is "<<sobj1.SumAll()<<"\n";
		
		return 0;
}

		

