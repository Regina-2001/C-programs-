#include<iostream>
using namespace std;

typedef struct Node
{
 int data;
 struct Node *next;
}NODE,*PNODE;

class Singly
{
  private:
     PNODE Head;
     int iSize;

  public:

    Singly();
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

Singly::Singly()
{
   this->Head=NULL;
   this->iSize=0;
}

void Singly::InsertFirst(int iValue)
{
  PNODE newn=NULL;
  newn=new NODE;
  newn->next=NULL;
  newn->data=iValue;

  if(Head==NULL)
  {
    Head=newn;
  }
  else
  {
    newn->next=Head;
    Head=newn;
  }
  iSize++;
}

void Singly::InsertLast(int iValue)
{
   PNODE newn=NULL;
  newn=new NODE;
  newn->next=NULL;
  newn->data=iValue;

  if(Head==NULL)
  {
    Head=newn;
  }
  else
  {
     PNODE temp=Head;

     while(temp->next!=NULL)
     {
        temp=temp->next;
     }
     temp->next=newn;
     newn->next=NULL;
  }
  iSize++;
}

void Singly::Display()
{
   PNODE temp=Head;

   while(temp!=NULL)
   {
      cout<<temp->data<<"\t";
      temp=temp->next;
   }
}


int Singly::Count()
{
  return iSize;
}

void Singly::InsertAtPos(int iValue,int iPos)
{
   PNODE newn=NULL;
   newn=new NODE;
   newn->next=NULL;
   newn->data=iValue;
   PNODE temp=Head;

  if((iPos<1)||(iPos>iSize+1))
  {
    cout<<"\nInvalid Position\n";
    return;
  }
  else if(iPos==1)
  {
    InsertFirst(iValue);
  }
  else if(iPos==iSize+1)
  {
    InsertLast(iValue);
  }
  else
  {
     int i=0;
     for(i=1;i<iPos-1;i++)
     {
       temp=temp->next;
     }
     newn->next=temp->next;
     temp->next=newn;
     iSize++;
  }

}

void Singly::DeleteFirst()
{
   PNODE temp=NULL;

   if(Head==NULL)
   {
     return;
   }
   else
   {
      temp=Head;
      Head=Head->next;
      delete temp;
      iSize--;
   }
}

void Singly::DeleteLast()
{
  PNODE temp=Head;

  if(Head==NULL)
  {
    return;
  }
  else if(Head->next==NULL)
  {
    delete Head;
    Head=NULL;
  }
  else
  {
     while(temp->next->next!=NULL)
    {
      temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    iSize--;
  }
}

void Singly::DeleteAtPos(int iPos)
{
  PNODE temp=Head;
  PNODE temp2=NULL;
  int i=0;

 if((iPos<1)||(iPos>iSize))
  {
    cout<<"\nInvalid Position\n";
    return;
  }
  else if(iPos==1)
  {
    DeleteFirst();
  }
  else if(iPos==iSize)
  {
    DeleteLast();
  }
  else
  {
    for(i=1;i<iPos-1;i++)
    {
      temp=temp->next;
    }
    temp2=temp->next;
    temp->next=temp->next->next;
    delete temp2;
    iSize--;
  }
}


int main()
{
   int iNo=0,ch=1,iPos=0;
   Singly obj;

   while(ch!=0)
  {
     cout<<"\nEnter your Choice\n";
     cout<<"\n----------------------------------------------------------\n";
     cout<<"\n1:Insert at First\n2:Insert at Last\n3:Insert at position\n4:Delete at first\n5:Delete at Last\n6:Delete at position\n7:Display all elements\n8:Count all elements\n0:Exit\n";
     cout<<"\n---------------------------------------------------------\n";
    cin>>ch;

   switch(ch)
   {
      case 1:cout<<"\nEnter the element\n";
             cin>>iNo;
             obj.InsertFirst(iNo);
             break;
     case 2:cout<<"\nEnter the element\n";
            cin>>iNo;
           obj.InsertLast(iNo);
            break;
     case 3:cout<<"\nEnter the position\n";
            cin>>iPos;
            cout<<"\nEnter the element\n";
            cin>>iNo;
            obj.InsertAtPos(iNo,iPos);
            break;
    case 4:obj.DeleteFirst();
          break;
    case 5:obj.DeleteLast();
          break;
    case 6:cout<<"\nEnter the position\n";
           cin>>iPos;
           obj.DeleteAtPos(iPos);
         break;
    case 7:obj.Display();
           break;
    case 8:cout<<"\nThe no of elements are\n"<<obj.Count();
           break;
    }
 }
    cout<<"\nThanks for using the application\n";
   return 0;
}

