/*2. Write a program which display all palindrome elements of singly linked
list.

Function Prototype :void DisplayPallindrome( PNODE Head);

Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11 6 414
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
// Function name: DisplayPallindrome
// Description:   Used to display pallindrome element of linked list
// Parameters:    first pointer 
// Return value:  void
//
////////////////////////////////////////////////////////////////////////////////////\

void DisplayPallindrome(PNODE Head)
{
	int temp=0,idigit=0,iRev=0;
	
	while(Head!=NULL)
	{
		temp=Head->data;
		iRev=0;
		
		while(Head->data!=0)
		{
		idigit=Head->data%10;
		iRev=(iRev*10)+idigit;
		Head->data=Head->data/10;
		}
		
	    if(iRev==temp)
		{
			printf("%d\t",temp);
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
	
	printf("\n");
	
	DisplayPallindrome(first);
	
	return 0;
}