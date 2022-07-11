/*5. Write a program which return smallest element from singly linear linked
list.

Function Prototype :int Minimum( PNODE Head);

Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20
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
// Function name: Minimum
// Description:   Used to find the smallest element of linked list
// Parameters:    first pointer 
// Return value:  int
//
////////////////////////////////////////////////////////////////////////////////////

int Minimum(PNODE Head)       // to find the smallest element of linked list
{
	int iAns=Head->data;
	
	while(Head!=NULL)
	{
		if(iAns>Head->data)
		{
			iAns=Head->data;
		}
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
	InsertFirst(&first,998);
	InsertFirst(&first,89);
	
	printf("\n");
	
	Display(first);
	
	iRet=Minimum(first);
	
	printf("\n the smallest number is %d",iRet);
	
	return 0;
}
