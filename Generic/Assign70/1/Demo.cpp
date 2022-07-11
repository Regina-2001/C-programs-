/*
Complete below code snippet by writing definitions of below function
1.SearchLast() - Search last occurrence of number
2.EvenCount() - Count even elements
3.OddCount(). - Count odd elements
*/

#include<iostream>
using namespace std;
class Array
{
   protected:
     int *Arr;
     int size;
   public:
 
   Array(int value = 10)
  { 
      cout<<"Inside Connstructor\n";
      this->size = value;
      this->Arr = new int[size];
  }
  
  Array(Array &ref)
  {
        cout<<"Inside copy connstructor\n";
        this->size = ref.size;
        this->Arr = new int[this->size];
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
   
   
   inline void Accept();
   inline void Display();
};


void Array::Accept()
{
        cout<<"Please enter the values\n";
       for(int i = 0;i<this->size;i++)
       {
           cin>>Arr[i];
        }
}

void Array::Display()
{
          cout<<"Elements are\n";
         for(int i = 0;i<this->size;i++)
         {
                 cout<<Arr[i]<<" ";
         }
         cout<<"\n";
}

class ArrSearch : public Array
{
    public:
         ArrSearch(int no = 10) : Array(no)
         {}
    
	int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
	int SumAll();
	
};


int ArrSearch::SearchFirst(int value)
{
     int i = 0;
     for(i = 0; i < size; i++)
     {
        if(Arr[i] == value)
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

int ArrSearch::Frequency(int value)
{
      int icnt = 0;
      for(int i = 0; i<size; i++)
      {
          if(Arr[i] == value)
          {
              icnt++;
          }
       }
      return icnt;
}

int ArrSearch::SearchLast(int value)
{
	int i=0;
	for(i=size;i>0;i--)
	{
		if(Arr[i]==value)
		{
			break;
		}
	}
	
	if(i==0)
	{
		return -1;
	}
	else
	{
		return i;
	}
}

int ArrSearch::EvenCount()
{
	int icnt=0;
	
	for(int i=0;i<size;i++)
	{
		if((Arr[i]%2)==0)
		{
			icnt++;
		}
	}
	return icnt;
}

int ArrSearch::OddCount()
{
	int icnt=0;
	
	for(int i=0;i<size;i++)
	{
		if((Arr[i]%2)!=0)
		{
			icnt++;
		}
	}
	
	return icnt;
}

int ArrSearch::SumAll()
{
	int iSum=0;
	
	for(int i=0;i<size;i++)
	{
		iSum=iSum+Arr[i];
	}
	
	return iSum;
}

int main()
{
	int ch=1,iRet;
	
        ArrSearch sobj1(5);
        sobj1.Accept();
        sobj1.Display();
        
     while(ch!=0)
	 {
		
		cout<<"Enter your choice\n";
		cout<<"---------------------------------------\n";
		cout<<"1:To find the frequency of a number in the array\n";
		cout<<"2:To Search first occurence of a number\n";
		cout<<"3:To Search last Occurence of a number\n";
		cout<<"4:To cout the odd elements\n";
		cout<<"5:To count the even elements\n";
		cout<<"6:To find the Sum of all elements\n";
	    cin>>ch;
		
		switch(ch)
		{
		    case 1:cout<<"\nThe frequency of the number is  "<<sobj1.Frequency(3)<<"\n";
                   break;
		   
		    case 2:cout<<"\nThe first occurence is at "<<sobj1.SearchFirst(3)<<"\n";
			        break;
					
		    case 3:cout<<"\nThe last occurence is at "<<sobj1.SearchLast(3)<<"\n";
			        break;
					
		    case 4:cout<<"The number of odd elements are "<<sobj1.OddCount()<<"\n";
			         break;
					 
			case 5:cout<<"The number of even elements are "<<sobj1.EvenCount()<<"\n";
			        break;
					
		    case 6:cout<<"The sum of elements is "<<sobj1.SumAll()<<"\n";
			        break;
	                	
		}
	 }		
		
        return 0;
}





	 