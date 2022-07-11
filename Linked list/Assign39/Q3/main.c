/*3. Write a program which returns addition of all element from singly linear
linked list.

Function Prototype :int Addition( PNODE Head);

Input linked list : |10|->|20|->|30|->|40|
Output : 100
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
// Function name: Addition
// Description:   Used to add elements of linked list
// Parameters:    first pointer 
// Return value:  int
//
////////////////////////////////////////////////////////////////////////////////////

int Addition(PNODE Head)       // Adds all elements of linked list
{
	int iAns=0;
	
	while(Head!=NULL)
	{
		iAns=iAns+Head->data;
		Head=Head->next;
	}
	return iAns;
}

int main()
{
	PNODE first=NULL;
	int iRet=0;
		
	InsertFirst(&first,144);
	InsertFirst(&first,12);
	InsertFirst(&first,38);
	InsertFirst(&first,89);
	
	printf("\n");
	
	Display(first);
	
	iRet=Addition(first);
	
	printf("\n the addition of elements is %d",iRet);
	
	return 0;
}
