// Lab Work 12 
/* Linked List implementation */
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info; //Declaring an info field
	struct node *next; // next pointer of node
};


void insert_beg();
int insert_position();
void insert_end();
int display();
int search();
int del_beg();
int del_specified();
int del_end();


struct node *start = NULL;

//Main Function
int main()
{
int choice;
int flag;

do
{
printf("\n\n MENU");
printf(" \n\n\t 1: Insert at Begnning ");
printf(" \n\n\t 2: Insert at given position ");
printf(" \n\n\t 3: Insert at End ");
printf(" \n\n\t 4: Delete at Beginning");
printf(" \n\n\t 5: Delete at specified position");
printf(" \n\n\t 6: Delete at End");
printf(" \n\n\t 7: Display all nodes ");
printf(" \n\n\t 8: Search Item");
printf("\n\t 9: Exit");
printf("\n\n\n Enter of your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
		insert_beg();
		break;
case 2:
		insert_position();
		break;
case 3:
		insert_end();
		break;
case 4:  del_beg();
		 break;
case 5:   del_specified();
		break;
case 6:
		del_end();
		break;
case 7: 
		display();
		break;
case 8:  search();
		break;
case 9:
		flag = 0;
		break;
		
default:
		printf("\n Invalid Choice");
}
}while(flag);
system("pause");
return 0;
}


void insert_beg()
{
	int item;
	struct node *nnode;
	
	printf("\Enter the item\t	");
	scanf("%d",&item);
	nnode = (struct node *) malloc(sizeof(struct node));
	nnode->info = item;
	nnode->next = start;
	start = nnode;
}


int insert_position()
{
	int item;
	struct node *nnode,*temp;
	int pos,i;
	
	printf("\Enter the item\t	");
	scanf("%d",&item);
	printf("\n Enter the position of node to add ");
	scanf("%d",&pos);
	
	if(start ==NULL)
	{
	printf("\n The list is empty!!!  Insufficient nodes... ");
	return 0;
	}
	else
	{
      temp = start;
      for(i=1;i<pos-1;i++)
         {
         	temp=temp->next;
         	if(temp==NULL)
         	 {
         	 	printf("\n The list has less number of node than position.");
				return 0;	
         	 }
         }
		nnode = (struct node *) malloc(sizeof(struct node));
		nnode->info = item;
		nnode->next = temp->next;
		temp->next = nnode;
		
	}
	
}

void insert_end()
{
	int item;
	struct node *nnode,*temp;
	
	printf("\Enter the item\t	");
	scanf("%d",&item);
	nnode = (struct node *) malloc(sizeof(struct node));
	nnode->info = item;
	nnode->next = NULL;
	
	if(start ==NULL)
	    start = nnode;
	 else
	 {
	 	temp = start;
		while(temp->next!=NULL)  
		   temp=temp->next;
	  temp->next = nnode;
	}
}

int del_beg()
{
	int item;
	struct node *temp;
	
	if(start ==NULL)
	{
		printf("\n Empty List !!!");
		return 0;
	}
	else
	{
		temp= start;
		printf("\n The deleted item is %d",start->info);
		start = start->next;
		free(temp);
	}
	
}



int del_end()
{
	int item;
	struct node *temp;
	
	if(start ==NULL)
	{
		printf("\n Empty List !!!");
		return 0;
	}
	else if( start->next==NULL)
	{
		temp = start;
		printf("\n Deleted item is %d",start->info);
		start = NULL;
		free(temp);
	}
	else
	{
		temp= start;
		while(temp->next!=NULL)
		  temp=temp->next;
		printf("\n The deleted item is %d",temp->info);
		free(temp->next);
		temp->next = NULL;
	}
	
}

int del_specified()
{
	int item;
	int pos,i;
	struct node *temp,*hold;
	
	printf("\n Enter the position");
	scanf("%d",&pos);
	
	if(start ==NULL)
	{
		printf("\n Empty List !!!");
		return 0;
	}
	else
	{
		temp= start;
		for(i=1;i<pos-1;i++)
		 {
		 	temp=temp->next;
		 	if(temp==NULL)
		 	   {
		 	   	printf("\n Not enough nodes in the list");
		 	   	return 0;
		 	   }
		 }
		 hold = temp->next;
		 printf("\n The deleted item is %d", hold->info);
		temp->next= hold->next;
		free(hold);
		
	}
	
}

int search()
{
	struct node *temp;
	int key;
	if(start ==NULL)
	{
		printf("\n The list is empty");
		return 0;
	}
	else
	{
		printf("\n Enter search item");
		scanf("%d",&key);
		
		temp = start;
		while(temp!=NULL)
		
		{
			if(temp->info==key)
			{
				printf("\n Search successful .....");
				break;
			}
			temp=temp->next;
		}
		if(temp==NULL)
		 printf("\n Unsuccessful Search !!!");
	}
}

int display()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("\n The list is empty");
		return 0;
    }
    else
    {
    	temp=start;
    	printf("\n The list is:");
    	while(temp!=NULL)
    	{
    		printf("%d ",temp->info);
    		temp=temp->next;
    	}
    }
	
}
