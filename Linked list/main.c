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
// Function name: InsertLast
// Description:   Used to insert the element at last position
// Parameters:    Address of first pointer and data of node
// Return value:  void
//
////////////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE Head,int iNo)       // Inserts element at the Last position
{
	PNODE newn=NULL;  
    PNODE temp=*Head;
	
	newn=(PNODE)malloc(sizeof(NODE));       //allocates memory for a node
	newn->data=iNo;                        //intialize data
	newn->next=NULL;                       //intialize next
	
	if(*Head==NULL)            //if linked list does not contain any nodes 
	{
		*Head=newn;
	}
	else                     //if linked list conatins atleast one node
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
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
// Function name: Count
// Description:   Used to count elements of linked list
// Parameters:    first pointer 
// Return value:  int
//
////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE Head)       // displays all elements of linked list
{
	int icnt=0;
	
	while(Head!=NULL)
	{
		icnt++;
		Head=Head->next;
	}
	return icnt;
}



int main()
{
	PNODE first=NULL;
	int iRet=0;
	
	InsertLast(&first,11);
	InsertLast(&first,22);
	InsertLast(&first,33);
	InsertLast(&first,44);
	
	Display(first);
	
	printf("\n");
	
	InsertFirst(&first,89);
	InsertFirst(&first,34);
	
	InsertLast(&first,45);
	
	Display(first);
	
	printf("\n");
	
	iRet=Count(first);
	
	printf("there are %d elements in linked list",iRet);
	
 return 0;
}