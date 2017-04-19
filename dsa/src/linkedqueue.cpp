// Lab Work 12 
/* Linked List implementation of Queue */
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info; //Declaring an info field
	struct node *next; // next pointer of node
};


void insert();

int display();


int del();


struct node *front = NULL;
struct node *rear = NULL;

//Main Function
int main()
{
int choice;
int flag;

do
{
printf("\n\n MENU");
printf(" \n\n\t 1: Insert ");
printf(" \n\n\t 2: Delete ");
printf(" \n\n\t 3: Display all nodes ");
printf(" \n\n\t 4: Exit");
printf("\n\n\n Enter of your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
		insert();
		break;

case 2:	del();
		break;
case 3:	display();
		break;

case 4:
		flag = 0;
		break;
		
default:
		printf("\n Invalid Choice");
}
}while(flag);
system("pause");
return 0;
}







void insert()
{
	int item;
	struct node *nnode,*temp;
	
	printf("\Enter the item\t	");
	scanf("%d",&item);
	nnode = (struct node *) malloc(sizeof(struct node));
	nnode->info = item;
	nnode->next = NULL;
	
	if(front ==NULL)
	    front=rear = nnode;
	 else
	 {
	 	rear->next = nnode;
	 	rear = nnode;
	}
}

int del()
{
	int item;
	struct node *temp;
	
	if(front ==NULL)
	{
		printf("\n Empty List !!!");
		return 0;
	}
	else if(front->next==NULL)
	{
		temp= front;
		rear=front =NULL;
		printf("\n The deleted item is %d",temp->info);
		free(temp);
	}
	else
	{
		temp=front;
		front = front->next;
		printf("\n Deleted item  is %d\n",temp->info);
		free(temp);
	}
	
}

int display()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("\n The list is empty");
		return 0;
    }
    else
    {
    	temp=front;
    	printf("\n The list is:\t");
    	while(temp!=NULL)
    	{
    		printf("  %d  -> ",temp->info);
    		temp=temp->next;
    	}
    }
	
}
