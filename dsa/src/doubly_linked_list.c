#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *next;
	struct node *prev;
};

void insert_beg();
int insert_position();
void insert_end();
int del_beg();
int del_position();
int del_end();
int display();
int search();

struct node *start = NULL;

int main()
{
	int choice;
	int flag = 1;
	do
	{
		printf("\n\nMENU");
		printf("\n\n\t 1. Insert at the begining");
		printf("\n\n\t 2. Insert at given position");
		printf("\n\n\t 3. Insert at the end");
		printf("\n\n\t 4. Delete at the begining");
		printf("\n\n\t 5. Delete at the given position");
		printf("\n\n\t 6. Delete at the end");
		printf("\n\n\t 7. Display all nodes");
		printf("\n\n\t 8. Search item");
		printf("\n\n\t 9. Exit");
		printf("Please enter your choice");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: insert_beg();
			break;
			case 2: insert_position();
			break;
			case 3: insert_end();
			break;
			case 4: del_beg();
			break;
			case 5: del_position();
			break;
			case 6: del_end();
			break;
			case 7: display();
			break;
			case 8: search();
			break;
			case 9: flag = 0;
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
	struct node *nnode;
	printf("\nEnter the item");
	scanf("%d",&item);
	
}
