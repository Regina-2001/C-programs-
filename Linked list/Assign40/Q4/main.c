/*4. Write a program which return second maximum element from singly linear
linked list.

Function Prototype :int SecMaximum( PNODE Head);

Input linked list : |110|->|230|->|320|->|240|
Output : 240
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
// Function name: SecMaximum
// Description:   Used to search 2 maximum a element of linked list
// Parameters:    first pointer 
// Return value:  int
//
////////////////////////////////////////////////////////////////////////////////////\

int SecMaximum(PNODE Head)
{
	int iMax=0,iMax2=0;;
	
	iMax=Head->data;
	iMax2=Head->data;
	
	while(Head!=NULL)
	{
		if(iMax<Head->data)
		{
			iMax=Head->data;
		}
		Head=Head->next;
	}
	
	while(Head!=NULL)
	{
		if(iMax>iMax2)
		{
			iMax2=iMax;
		}
		Head=Head->next;
	}
}
	
int main()
{
	PNODE first=NULL;
	int iRet=0;
	
	InsertFirst(&first,11);
	InsertFirst(&first,28);
	InsertFirst(&first,17);
	InsertFirst(&first,89);
	InsertFirst(&first,41);
	InsertFirst(&first,6);
	
	printf("\n");
	
	Display(first);
	
	iRet=SecMaximum(first);
	
	printf("the second largest number is :\n  %d",iRet);
	
	return 0;
}



