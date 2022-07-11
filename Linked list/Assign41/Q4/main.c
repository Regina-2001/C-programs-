/*4. Write a program which display smallest digits of all element from singly
linear linked list.

Function Prototype :
void DisplaySmall( PNODE Head);

Input linked list : |11|->|250|->|532|->|415|
Output : 1 0 2 1
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
// Function name: DisplaySmall
// Description:   Used to display smallest digit of  element of linked list
// Parameters:    first pointer 
// Return value:  void
//
////////////////////////////////////////////////////////////////////////////////////\

void DisplaySmall(PNODE Head)
{
	int idigit=0,iMin=0;
	
	while(Head!=NULL)
	{
		iMin=Head->data%10;
		
		while(Head->data!=0)
		{
			idigit=Head->data%10;
			if(iMin>idigit)
			{
				iMin=idigit;
			}
			Head->data=Head->data/10;
		}			
		printf("%d\t",iMin);
		Head=Head->next;
	}
}

int main()
{
    PNODE first=NULL;
	int iRet=0;
	
	InsertFirst(&first,11);
	InsertFirst(&first,28);
	InsertFirst(&first,0);
	InsertFirst(&first,8363569);
	InsertFirst(&first,41);
	InsertFirst(&first,6);
	
	printf("\n");
	
	Display(first);
	
	printf("\n");
	
	DisplaySmall(first);
	
	return 0;
}	
			