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

int Count(PNODE Head,PNODE Tail)
{
	int iCnt=0;
	
	if((Head==NULL)&&(Tail==NULL))
	{
		return -1;
	}
	
	do
	{
		iCnt++;
		Head=Head->next;
	}while(Head!=Tail->next);
	
	return iCnt;
}

void InsertFirst(PPNODE Head,PPNODE Tail,int iValue)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iValue;
	newn->next=NULL;
	
	if((*Head==NULL)&&(*Tail==NULL))
	{
		*Head=newn;
		*Tail=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
		(*Tail)->next=newn;
}

void InsertLast(PPNODE Head,PPNODE Tail,int iValue)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->data=iValue;
	
	if((*Head==NULL)&&(*Tail==NULL))
	{
		*Head=newn;
		*Tail=newn;
	}
	else
	{
		(*Tail)->next=newn;
		*Tail=newn;
	}
	(*Tail)->next=*Head;
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int iValue,int pos)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->data=iValue;
	PNODE temp=*Head;
	int i=0,size=0;
	
	size=Count(*Head,*Tail);
	
	if((pos<1)||(pos>size+1))
	{
		return;
	}
	else if(pos==1)
	{
		InsertFirst(Head,Tail,iValue);
	}
	else if(pos==size+1)
	{
		InsertLast(Head,Tail,iValue);
	}
	else
	{
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
        newn->next=temp->next;
		temp->next=newn;
		(*Tail)->next=*Head;
	}
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	PNODE temp=NULL;
	
	if((*Head==NULL)&&(*Tail==NULL))
	{
		return;
	}
	else if(*Head==*Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
		return;
	}
	else
	{
		*Head=(*Head)->next;
		free((*Tail)->next);
		(*Tail)->next=*Head;
	}
	
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
	PNODE temp=*Head,temp2=NULL;
	if((*Head==NULL)&&(*Tail==NULL))
	{
		return;
	}
	else if(*Head==*Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
		return;
	}
	else
	{
		while(temp->next!=*Tail)
		{
			temp=temp->next;
		}
		
		free(*Tail);
		*Tail=temp;
		(*Tail)->next=*Head;
	}
	
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int pos)
{
	PNODE temp=*Head,temp2=NULL;
	int size=0,i=0;
	size=Count(*Head,*Tail);
	
   if((*Head==NULL)&&(*Tail==NULL))
   { 
     return;
   }
   
   if((pos<1)||(pos>size))
   {
	   return;
   }
   else if(pos==1)
   {
    DeleteFirst(Head,Tail);
   }
   else if(pos==size)
   {
      	   DeleteLast(Head,Tail);
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

void Display(PNODE Head,PNODE Tail)
{

	if((Head==NULL)&&(Tail==NULL))
	{
		return;
	}
	
	do
	{
		printf("%d\t",Head->data);
		Head=Head->next;
	}while(Head!=Tail->next);
}

void Create(PPNODE Head,PPNODE Tail)
{
	int iNo=0,iValue=0,i=0;
	
	printf("enter the no of elements\n");
	scanf("%d",&iNo);
	
	for(i=0;i<iNo;i++)
	{
		printf("enter the no\n");
		scanf("%d",&iValue);
		
		InsertLast(Head,Tail,iValue);
	}
}

int main()
{
	PNODE first=NULL;
	PNODE last=NULL;
    int ch=0,iNo=0,iPos=0,iRet=0;
	
	
	
	
	
	printf("------------------------------------------------\n");
	printf("Marvellous infosystems\n");
	printf("Singly Circular Linked List\n");
	printf("-----------------------------------------------\n");
	
	
	
	do
	{
	printf("\nEnter your choice\n"); 
    printf("-------------------------------------------\n");	
	printf("1.Create\n2.InsertFirst\n3.InsertLast\n4.InsertAtPos\n5.DeleteFirst\n6.DeleteLast\n7.DeleteAtPos\n8.Count\n9.Exit\n\n");
	printf("-------------------------------------------\n");
	
    scanf("%d",&ch);

    switch(ch)
	{
		case 1:Create(&first,&last);
		       break;
		
		case 2:printf("enter the number\n");
		       scanf("%d",&iNo);
			   printf("\n");
		       InsertFirst(&first,&last,iNo);
			   Display(first,last);
			   break;
			   
		case 3:printf("enter the number\n");
		       scanf("%d",&iNo);
		       InsertLast(&first,&last,iNo);
			   Display(first,last);
			   break;
			   
	    case 4:printf("enter the number\n");
		       scanf("%d",&iNo);
			   printf("enter the position\n");
			   scanf("%d",&iPos);
		       InsertAtPos(&first,&last,iNo,iPos);
			   printf("\n");
			   Display(first,last);
			   break;
       
	   case 5:DeleteFirst(&first,&last);
			   Display(first,last);
			   break;
			   
	   case 6:DeleteLast(&first,&last);
			   Display(first,last);
			   break;
	   
	   case 7:printf("enter the position\n");
			  scanf("%d",&iPos);
		      DeleteAtPos(&first,&last,iPos);
			  printf("\n");
			  Display(first,last);
			  break;
			  
	  case 8:iRet=Count(first,last);
	          printf("\n");
			  printf("Number of Nodes are:\n%d",iRet);
			   break;
	 case 9:break;
     
	}
	}while(ch!=9);

	return 0;
}
