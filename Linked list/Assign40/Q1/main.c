/*
1. Write a program which displays all elements which are perfect from singly
linear linked list.

Function Prototype :int DisplayPerfect( PNODE Head);

Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28
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
// Function name: DisplayPerfect
// Description:   Used to display perfect number of linked list
// Parameters:    first pointer 
// Return value:  void
//
////////////////////////////////////////////////////////////////////////////////////

void DisplayPerfect(PNODE Head)       // to display perfect number of linked list
{
	int i=0;
	int iAns=0;

	
	while(Head!=NULL)
	{
		iAns=0;
		for(i=1;i<=Head->data/2;i++)
		{
			if((Head->data%i)==0)
			{
				iAns=iAns+i;
			}
		}
		
		if(iAns==Head->data)
		{
			printf("%d\t",Head->data);
		}
		
		Head=Head->next;
	}
}

int main()
{
	PNODE first=NULL;
			
	InsertFirst(&first,11);
	InsertFirst(&first,28);
	InsertFirst(&first,17);
	InsertFirst(&first,89);
	InsertFirst(&first,41);
	InsertFirst(&first,6);
	
	
	printf("\n");
	
	Display(first);
	
	printf("\n");
	
	DisplayPerfect(first);
	
	return 0;
}
