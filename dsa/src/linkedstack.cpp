// Lab Work 13 
/* Linked List implementation of Stack */
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info; //Declaring an info field
	struct node *next; // next pointer of node
};


void push();

int display();
int search();
int pop();




struct node *top = NULL;

//Main Function
int main()
{
int choice;
int flag;

do
{
printf(" \n\n MENU");
printf(" \n\n\t 1: Push ");
printf(" \n\n\t 2: Pop ");
printf(" \n\n\t 3: Display all nodes ");
printf(" \n\n\t 4: Exit");
printf("\n\n\n Enter of your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
		push();
		break;
case 2:
		pop();
		break;
case 3:
		display();
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


void push()
{
	int item;
	struct node *nnode;
	
	printf("\Enter the item\t	");
	scanf("%d",&item);
	nnode = (struct node *) malloc(sizeof(struct node));
	nnode->info = item;
	nnode->next = top;
	top = nnode;
}



int pop()
{
	int item;
	struct node *temp;
	
	if(top ==NULL)
	{
		printf("\n Empty List !!!");
		return 0;
	}
	else
	{
		temp= top;
		printf("\n The deleted item is %d",top->info);
		top = top->next;
		free(temp);
	}
	
}



int display()
{
	struct node *temp;
	if(top==NULL)
	{
		printf("\n The list is empty");
		return 0;
    }
    else
    {
    	temp=top;
    	printf("\n The list is:");
    	while(temp!=NULL)
    	{
    		printf("%d ",temp->info);
    		temp=temp->next;
    	}
    }
	
}
