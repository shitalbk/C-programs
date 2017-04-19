#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int info;
	struct node *next;
};
void insert_beg();
int del_beg();
void insert_end();
int del_end();
int display();


struct node *start = NULL;
struct node *last = NULL;

int main()
{
	int choice;
	int flag = 1;
	do
	{
		printf("\n\n\t MENU");
		printf("\n\n\t 1. Insert at the begining");
		printf("\n\n\t 2. Insert at the end");
		printf("\n\n\t 3. Delete at the begining");
		printf("\n\n\t 4. Delete at the end");
		printf("\n\n\t 5. Display nodes");
		printf("\n\n\t 6. Exit");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		
	   switch(choice)
	   {
	   	case 1: insert_beg();
	   	break;
	   	case 2: insert_end();
	   	break;
	   	case 3: del_beg();
	   	break;
	   	case 4: del_end();
	   	break;
	   	case 5: display();
	   	break;
	   	case 6: flag = 0;
	   	break;
	   	default:
	   		printf("\n Invalid choice");
	   	}
	   	
	   }while(flag);
	   system("pause");
	   return 0;
	}
	
	void insert_beg()
	{
		int item;
		struct node *newnode;
		printf("\n Enter the item: ");
		scanf("%d",&item);
		newnode =  (struct node *)malloc(sizeof(struct node));
		if(start == NULL)
		{
		  newnode->info = item;
		  newnode->next = newnode;
		  start  = last = newnode;
		}
		else
		{
			newnode->info = item;
			newnode->next = start;
			start = newnode;
			last->next = newnode;
		}
	}
	
	void insert_end()
	{
		int item;
		struct node *newnode;
		printf("\n Enter the item: ");
		scanf("%d",&item);
		newnode = (struct node *)malloc (sizeof(struct node));
		if(start == NULL)
		{
			newnode->info = item;
			newnode->next = newnode;
			start = last = newnode;
		}
		else
		{
			newnode->info = item;
			newnode->next = start;
			last->next = newnode;
			last = newnode;
		}
	}
	
	int del_beg()
	{
		struct node *temp;
		if(start==NULL)
		{
			printf("\n List is empty");
			return 0;
		}
		else if(start==last)
		{
			temp = start;
			start = last = NULL;
			printf("The deleted item is %d",temp->info);
			free(temp);
		}
		else
		{
			temp = start;
			start = start->next;
			last->next = start;
			printf("The deleted item is %d",temp->info);
			free(temp);
		}
	}
	
	int del_end()
	{
		struct node *temp,*hold;
		if(start==NULL)
		{
			printf("List is empty");
			return 0;
		}
		else if(start==last)
		{
			temp = start;
			start = last = NULL;
		    free(temp);
		}
		else
		{
			temp = start;
			while(temp->next!=last)
			temp = temp->next;
			hold = temp->next;
			last = temp;
			last->next = start;
			printf("The deleted node is %d",hold->info);
			free(hold);
		}
	}
	
	int display()
	{
		struct node *temp;
		if(start==NULL)
		{
			printf("Empty List");
			return 0;
		}
		else
		{
			temp = start;
			printf("The list elements are: ");
			while(temp!=last)
			{
			
				printf("%d\t",temp->info);
				temp = temp->next;
			}
				printf("%d\t",temp->info);
			
		}
	}

