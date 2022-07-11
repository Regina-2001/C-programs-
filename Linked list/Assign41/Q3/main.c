/*
3. Write a program which display product of all digits of all element from
singly linear linked list. (Don’t consider 0)

Function Prototype :void DisplayProduct( PNODE Head);

Input linked list : |11|->|20|->|32|->|41|
Output : 1 2 6 4
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
// Function name: DisplayProduct
// Description:   Used to display product element of linked list
// Parameters:    first pointer 
// Return value:  void
//
////////////////////////////////////////////////////////////////////////////////////\

void DisplayProduct(PNODE Head)
{
	int idigit=0,iAns=0;
	while(Head!=NULL)
	{
		iAns=1;
		while(Head->data!=0)
		{
			idigit=Head->data%10;
			if(idigit==0)
			{
				idigit=1;
			}
			
			iAns=iAns*idigit;
			
			Head->data=Head->data/10;
		}
		
		printf("%d\t",iAns);
		
		Head=Head->next;
	}
}

int main()
{
    PNODE first=NULL;
	int iRet=0;
	
	InsertFirst(&first,11);
	InsertFirst(&first,28);
	InsertFirst(&first,10);
	InsertFirst(&first,89);
	InsertFirst(&first,41);
	InsertFirst(&first,6);
	
	printf("\n");
	
	Display(first);
	
	printf("\n");
	
	DisplayProduct(first);
	
	return 0;
}	
			