/*2. Write a program which displays all elements which are prime from singly
linear linked list.

Function Prototype :int DisplayPrime( PNODE Head);

Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89
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
// Function name: DisplayPrime
// Description:   Used to display prime number of linked list
// Parameters:    first pointer 
// Return value:  void
//
////////////////////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE Head)
{
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
	
	DisplayPrime(first);
	
	return 0;
}
