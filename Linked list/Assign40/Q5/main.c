/*5. Write a program which display addition of digits of element from singly
linear linked list.

Function Prototype :int SumDigit( PNODE Head);

Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10
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
// Function name: SumDigit
// Description:   Used to display sum of digits of linked list
// Parameters:    first pointer 
// Return value:  void
//
////////////////////////////////////////////////////////////////////////////////////

void SumDigit(PNODE Head)       // to display prime number of linked list
{
	int iSum=0,iNum=0,iDigit=0;
	while(Head!=NULL)
	{
		iNum=Head->data;
		iSum=0;
		
		while(iNum!=0)
		{
			iDigit=iNum%10;
			iSum=iSum+iDigit;
			iNum=iNum/10;
		}
		printf("%d\t",iSum);
		
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
	
	SumDigit(first);
	
	return 0;
}
