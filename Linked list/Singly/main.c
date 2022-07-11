/*Singly linear linked list*/

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

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("%d\t",Head->data);
		Head=Head->next;
	}
}

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

void InsertFirst(PPNODE Head,int ivalue)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->data=ivalue;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
}


void InsertLast(PPNODE Head,int ivalue)
{
	PNODE newn=NULL;
	PNODE temp=*Head;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->data=ivalue;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
       while(temp->next!=NULL)
	   {
		   temp=temp->next;
	   }
	   temp->next=newn;
	}
}

void InsertAtPos(PPNODE Head,int ivalue,int pos)
{
	PNODE newn=NULL;
	PNODE temp=*Head;
	int size=0,i=0;
	
	size=Count(*Head);
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->data=ivalue;
	
	if((pos<1)||(pos>size+1))
	{
		printf("Invalid Position");
		return;
	}
	else if(pos==1)
	{
		InsertFirst(Head,ivalue);
	}
	else if(pos==size+1)
	{
		InsertLast(Head,ivalue);
	}
	else
	{
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		
		newn->next=temp->next;
		temp->next=newn;
	}
		
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp=NULL;
	
	if(*Head==NULL)
	{
		return;
	}
	else
	{
		temp=*Head;
		*Head=temp->next;
		free(temp);
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
		free(temp);
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

void DeleteAtPos(PPNODE Head,int pos)
{
	PNODE temp=*Head;
	PNODE temp2=NULL;
	int size=0,i=0;
	
	size=Count(*Head);
	
	if((pos<1)||(pos>size))
	{
		return;
	}
	else if(pos==1)
	{
		DeleteFirst(Head);
	}
	else if(pos==size)
	{
		DeleteLast(Head);
	}
	else
	{
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		
		temp2=temp->next;
		temp->next=temp->next->next;
		free(temp2);
	}
}

void Create(PPNODE Head)
{
	int iNo=0,iValue=0,i=0;
	
	printf("enter the no of elements\n");
	scanf("%d",&iNo);
	
	for(i=0;i<iNo;i++)
	{
		printf("enter the no\n");
		scanf("%d",&iValue);
		
		InsertLast(Head,iValue);
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
