#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;


int Count(PNODE Head,PNODE Tail)
{
	int iCnt=0;
	
	do
	{
		iCnt++;
		Head=Head->next;
	}while(Head!=Tail->next);
	return iCnt;
}


void InsertFirst(PPNODE Head,PPNODE Tail,int ivalue)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->prev=NULL;
	newn->data=ivalue;
	
	if((*Head==NULL)&&(*Tail==NULL))
	{
		*Head=newn;
		*Tail=newn;
	}
	else 
	{
		newn->next=*Head;
		(*Head)->prev=newn;
		*Head=(*Head)->prev;
	}
	(*Tail)->next=*Head;
	(*Head)->prev=*Tail;
}

void InsertLast(PPNODE Head,PPNODE Tail,int ivalue)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->prev=NULL;
	newn->data=ivalue;
	
	if((*Head==NULL)&&(*Tail==NULL))
	{
		*Head=newn;
		*Tail=newn;
	}
	else
	{
		newn->prev=*Tail;
		(*Tail)->next=newn;
		*Tail=newn;
	}
	(*Tail)->next=*Head;
	(*Head)->prev=*Tail;
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int ivalue,int ipos)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->prev=NULL;
	newn->data=ivalue;
	PNODE temp=*Head;
	
	int size=0,i=0;
	
	size=Count(*Head,*Tail);
	
	if((ipos<1)||(ipos>size+1))
	{
		return;
	}
	else if(ipos==1)
	{
		InsertFirst(Head,Tail,ivalue);
	}
	else if(ipos==size+1)
	{
		InsertLast(Head,Tail,ivalue);
	}
	else
	{
		for(i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next->prev=newn;
		temp->next=newn;
		newn->prev=temp;
	}
	

}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if((*Head==NULL)&&(*Tail==NULL))
	{
      return;
	}	
    else if(*Head==*Tail)
	{
       free(*Head);
       *Head=NULL;
        *Tail=NULL;
	}		
    else
	{
		*Head=(*Head)->next;
		free((*Head)->prev);
	}
	
		(*Tail)->next=*Head;
	    (*Head)->prev=*Tail;
}		
	
void DeleteLast(PPNODE Head,PPNODE Tail)
{  
     if((*Head==NULL)&&(*Tail==NULL))
	 {
		 return;
	 }
	 else if(*Head==*Tail)
	 {
		 free(*Head);
		 *Head=NULL;
		 *Tail=NULL;
	 }
	 else
	 {
		 *Tail=(*Tail)->prev;
		 free((*Tail)->next);
	 
	    (*Tail)->next=*Head;
	    (*Head)->prev=*Tail;
	 }
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int ipos)
{
     int size=0,i=0;
	 PNODE temp=*Head;
	 
	 size=Count(*Head,*Tail);

     if((ipos<1)||(ipos>size+1))
	 {
         return;
	 }		 
     else if(ipos==1)
	 {
          DeleteFirst(Head,Tail);
	 }
	 else if(ipos==size)
	 {
		 DeleteLast(Head,Tail);
	 }
	 else
	 {
		 for(i=1;i<ipos-1;i++)
		 {
			 temp=temp->next;
		 }
		 
		temp->next=temp->next->next;
		free(temp->next->prev);
        temp->next->prev=temp;
	 
      
	 }
}	
	
	
void Display(PNODE Head,PNODE Tail)
{
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
	
	Create(&first,&last);
	
	printf("\n");
	
	Display(first,last);
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
		       InsertFirst(&first,&last,iNo);
			   Display(first,last);
			   break;
			   
		case 2:printf("enter the number\n");
		       scanf("%d",&iNo);
		       InsertLast(&first,&last,iNo);
			   Display(first,last);
			   break;
			   
	    case 3:printf("enter the number\n");
		       scanf("%d",&iNo);
			   printf("enter the position\n");
			   scanf("%d",&iPos);
		       InsertAtPos(&first,&last,iNo,iPos);
			   printf("\n");
			   Display(first,last);
			   break;
       
	   case 4:DeleteFirst(&first,&last);
			   Display(first,last);
			   break;
			   
	   case 5:DeleteLast(&first,&last);
			   Display(first,last);
			   break;
	   
	   case 6:printf("enter the position\n");
			  scanf("%d",&iPos);
		      DeleteAtPos(&first,&last,iPos);
			  printf("\n");
			  Display(first,last);
			  break;
			  
	  case 7:iRet=Count(first,last);
	          printf("\n");
			  printf("Number of Nodes are:\n%d",iRet);
			   break;
	 case 8:break;
     
	}
	}while(ch!=8);

	return 0;
}
