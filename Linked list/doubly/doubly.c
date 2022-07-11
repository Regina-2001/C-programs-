#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

int Count(PNODE Head)
{
	int iCnt=0;
	
	while(Head!=NULL)
	{
		iCnt++;
		Head=Head->next;
	}
	return iCnt;
}


void InsertFirst(PPNODE Head,int iValue)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->prev=NULL;
	newn->data=iValue;
	
    if(*Head==NULL)
	{
	   *Head=newn;	
	}
	else
	{
		newn->next=*Head;
		(*Head)->prev=newn;
		*Head=newn;
	}
}

void InsertLast(PPNODE Head,int iValue)
{
     PNODE newn=NULL;
	 PNODE temp=*Head;
	 
     newn=(PNODE)malloc(sizeof(NODE));
     newn->next=NULL;
     newn->prev=NULL;	 
     newn->data=iValue;
	 
	 if(*Head==NULL)
	 {
		 *Head=newn;
	 }
	 else if((*Head)->next==NULL)
	 {
		 (*Head)->next=newn;
	     newn->prev=*Head;
	 }
	 else
	 {
		 while(temp->next!=NULL)
		 {
			 temp=temp->next;
		 }
		 
		 temp->next=newn;
		 newn->prev=temp;
	 }
}

void InsertAtPos(PPNODE Head,int iValue,int iPos)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->prev=NULL;
	newn->data=iValue;
	PNODE temp=*Head;
	
	int size=0,i=0;
	 
	size=Count(*Head);
	
	if((iPos<1)||(iPos>size+1))
	{
		printf("Invalid position\n");
		return;
	}
	else if(iPos==1)
	{
		InsertFirst(Head,iValue);
	}
	else if(iPos==size+1)
	{
		InsertLast(Head,iValue);
	}
	else
	{
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next->prev=newn;
		newn->prev=temp;
		temp->next=newn;
	}
}

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("%d\t",Head->data);
		Head=Head->next;
	}
}



void DeleteFirst(PPNODE Head)
{
	if(*Head==NULL)
	{
		return;
	}
	else if((*Head)->next==NULL)
	{
		free(*Head);
		*Head=NULL;
	}
	else
	{
		*Head=(*Head)->next;
		free((*Head)->prev);
		(*Head)->prev=NULL;
	}
}



void DeleteLast(PPNODE Head)
{
	PNODE temp=*Head;
	
	if(*Head==NULL)
	{
		return;
	}
	else if((*Head)->next==NULL)
	{
		free(*Head);
		*Head=NULL;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
	       temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}
	



void DeleteAtPos(PPNODE Head,int iPos)
{
	PNODE temp=*Head;
	
	int size=0,i=0;
	
	size=Count(*Head);
	
	if((iPos<1)||(iPos>size+1))
	{
		printf("Invalid position");
		return;
	}
	else if(iPos==1)
	{
		DeleteFirst(Head);
	}
	else if(iPos==size)
	{
		DeleteLast(Head);
	}
	else
	{
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		
		temp->next=temp->next->next;
		free(temp->next->prev);
		temp->next->prev=temp;
	}
	
}

void Create(PPNODE Head)
{
	int i=0,iNum=0,iNo=0;
	
   printf("\nEnter the no elements to be inserted in linked list\n");
   scanf("%d",&iNo);

   for(i=0;i<iNo;i++)
   {  
      printf("\nEnter the number\n");
	  scanf("%d",&iNum);
      InsertLast(Head,iNum);
   }
}

	 
int main()
{
	PNODE first=NULL;
    int ch=0,iNo=0,iPos=0,iRet=0;
	
	Create(&first);
	
	printf("\n");
	
	Display(first);
	
	printf("\n");
	
	do
	{
	printf("\n1.InsertFirst\n2.InsertLast\n3.InsertAtPos\n4.DeleteFirst\n5.DeleteLast\n6.DeleteAtPos\n7.Count\n8.Exit\n\n");
	
	printf("Enter your choice\n"); 
    scanf("%d",&ch);

    switch(ch)
	{
		case 1:printf("enter the number\n");
		       scanf("%d",&iNo);
			   printf("\n");
		       InsertFirst(&first,iNo);
			   Display(first);
			   break;
			   
		case 2:printf("enter the number\n");
		       scanf("%d",&iNo);
		       InsertLast(&first,iNo);
			   Display(first);
			   break;
			   
	    case 3:printf("enter the number\n");
		       scanf("%d",&iNo);
			   printf("enter the position\n");
			   scanf("%d",&iPos);
		       InsertAtPos(&first,iNo,iPos);
			   printf("\n");
			   Display(first);
			   break;
       
	   case 4:DeleteFirst(&first);
			   Display(first);
			   break;
			   
	   case 5:DeleteLast(&first);
			   Display(first);
			   break;
	   
	   case 6:printf("enter the position\n");
			  scanf("%d",&iPos);
		      DeleteAtPos(&first,iPos);
			  printf("\n");
			  Display(first);
			  break;
			  
	  case 7:iRet=Count(first);
	          printf("\n");
			  printf("Number of Nodes are:\n%d",iRet);
			   break;
	 case 8:break;
     
	}
	}while(ch!=8);

	return 0;
}
