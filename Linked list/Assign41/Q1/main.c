/*1. Write a program which reverse each element of singly linked list.
Function Prototype :

void Reverse( PNODE Head);

Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : |11|->|82|->|71|->|14|->|6|->|98|
*/


#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function name: InsertFirst
// Description:   Used to insert the element at first position
// Parameters:    Address of first pointer and data of node
// Return value:  void
//
////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int iNo)       // Inserts element at the first position
{
	PNODE newn=NULL;                    	
	newn=(PNODE)malloc(sizeof(NODE));       //allocates memory for a node
	newn->data=iNo;                        //intialize data
	newn->next=NULL;                       //intialize next
	
	if(*Head==NULL)            //if linked list does not contain any nodes 
	{
		*Head=newn;
	}
	else                     //if linked list conatins atleast one node
	{
		newn->next=*Head;
		*Head=newn;
	}
}

//////////////////////////////////////////////////////////////////////////////////////
//
// Function name: Display
// Description:   Used to display elements of linked list
// Parameters:    first pointer 
// Return value:  void
//
////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head)       // displays all elements of linked list
{
	while(Head!=NULL)
	{
		printf("%d\t",Head->data);
		Head=Head->next;
	}
}

//////////////////////////////////////////////////////////////////////////////////////
//
// Function name: Reverse
// Description:   Used to reverse element of linked list
// Parameters:    Address of first pointer  
// Return value:  void
//
////////////////////////////////////////////////////////////////////////////////////\

void Reverse(PNODE Head)
{
	int iDigit=0,itemp=0,iNo=0;
	
	while(Head!=NULL)
	{
		itemp=0;
		
		while(Head->data!=0)
		{
		iDigit=Head->data%10;
		itemp=(itemp*10)+iDigit;
		Head->data=Head->data/10;
		}
		Head->data=itemp;
		
		Head=Head->next;
	}
}


int main()
{
	PNODE first=NULL;
	int iRet=0;
	int iValue=0;
	
	InsertFirst(&first,11);
	InsertFirst(&first,22);
	InsertFirst(&first,456);
	InsertFirst(&first,22);
	InsertFirst(&first,78);
	InsertFirst(&first,34);
	InsertFirst(&first,22);
	InsertFirst(&first,67);
	
	Display(first);
	
	printf("\n");
	
	Reverse(first);
	
	Display(first);
	
	return 0;
}
	