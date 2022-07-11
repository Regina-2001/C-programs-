/*1. Write a program which search first occurrence of particular element from
singly linear linked list.

Function should return position at which element is found.

Function Prototype :int SearchFirstOcc( PNODE Head , int no );

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 3
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
// Function name: SearchFirstOcc
// Description:   Used to search a element of linked list
// Parameters:    first pointer ,no to be searched 
// Return value:  int
//
////////////////////////////////////////////////////////////////////////////////////

int SearchFirstOcc(PNODE Head,int iNo)       // displays all elements of linked list
{
	int iCnt=0;
	
	while(Head!=NULL)
	{
		iCnt++;
		if(Head->data==iNo)
		{
			break;
		}
		
		Head=Head->next;
	}
	return iCnt;
}

int main()
{
	PNODE first=NULL;
	int iRet=0;
	int iValue=0;
	
	InsertFirst(&first,11);
	InsertFirst(&first,22);
	InsertFirst(&first,33);
	InsertFirst(&first,44);
	
	printf("enter the number to be searched\n");
	scanf("%d",&iValue);
	
	printf("\n");
	
	Display(first);
	
	iRet=SearchFirstOcc(first,iValue);
	
	printf("\n%d is found at %d position",iValue,iRet);
	
	return 0;
}
	
	
	
	
	
	
