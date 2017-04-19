//lab work 18
//doubly linked list implementation
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info; //declaring an info field
    struct node *next; // next node pointer
    struct node *prev; //previous pointer
};
void insert_beg();
int insert_position();
void insert_end();
int display();
int search();
int del_beg();
int del_specified();
int del_end();
struct node *start =NULL; //global external pointer to point first node

int main()
{
    int choice;
    int flag = 1;
    do
    {
        printf("\n\n MENU ");
        printf("\n\n\t 1: Insert at the begining");
        printf("\n\n\t 2: Insert at given position");
        printf("\n\n\t 3: Insert at the end");
        printf("\n\n\t 4: Delete at the begining");
        printf("\n\n\t 5: Delete at the specified position");
        printf("\n\n\t 6: Delete at the end");
        printf("\n\n\t 7: Display all nodes");
        printf("\n\n\t 8: Search Item");
        printf("\n\n\t 9: Exit");
        printf("\n\n\t Enter your choice:\t");
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
            case 4:
                del_beg();
                break;
            case 5:
                del_specified();
                break;
            case 6:
                del_end();
                break;
            case 7:
                display();
                break;
            case 8:
                search();
                break;
            case 9:
                flag = 0;
                break;
            default:
                printf("\n Invalid choice");
            }
        }while(flag);
        system("pause");
        return  0;
    }
    
    void insert_beg() //inserting node at the begining
    {
        int item;
        struct node *nnode;
        printf("\n Enter the item \t ");
        scanf("%d",&item);
        nnode = (struct node *) malloc(sizeof(struct node));
        nnode->info = item;
        if(start==NULL)
        {
            nnode->next =NULL;
            nnode->prev =NULL;
            start =nnode;
        }
        else
        {
            nnode->next = start;
            nnode->prev =NULL;
            start->prev =nnode;
            start =nnode;
        }
    }
    
    int insert_position()
    {
        int item;
        struct node *nnode,*temp;
        int pos,i;
        printf("\n Enter the item\t ");
        scanf("%d",&item);
        printf("\n Enter the position of node to add");
        scanf("%d",&pos);
        if(start==NULL)
        {
            printf("\nThe list is empty!!! INsufficient nodess...");
            return 0;
        }
        else
        {
            temp =start;
            for(i=1;i<pos-1;i++)
            {
                temp = temp->next;
                if(temp==NULL)
                {
                    printf("\n The list has less number of node than position");
                        return 0;
                    }
                }
                nnode  = (struct node *)malloc (sizeof(struct node));
                nnode->info =item;
                nnode->next = temp->next;
                nnode->prev = temp;
                temp->next->prev = nnode;
                temp->next =nnode;
            }
        }
        
        void insert_end()
        {
            int item;
            struct node *nnode,*temp;
            printf("\nEnter the item\t ");
            scanf("%d",&item);
            nnode = (struct node *)malloc(sizeof(struct node));
            nnode->info = item;
            nnode->next =NULL;
            
            if(start ==NULL)
            {
                start =nnode;
                nnode->prev =NULL;
            }
            else
            {
                temp =start;
                while(temp->next!=NULL)
                temp = temp->next;
                temp->next = nnode;
                nnode->prev = temp;
            }
        }
        
        int del_beg()
        {
            int item;
            struct node *temp;
            if(start == NULL)
            {
                printf("\n Empty List !!!");
                return 0;
            }
            else if(start->next == NULL)
            {
                temp = start;
                start = NULL;
                free(temp);
            }
            else
            {
                temp = start;
                printf("\n The deleted item is %d",start->info);
                start = start->next;
                start->prev = NULL;
                free(temp);
            }
        }
        int del_end()
        {
            int item;
            struct node *temp,*hold;
            if(start == NULL)
            {
                printf("\n Empty List!!!");
                return 0;
            }
            else if(start->next==NULL)
            {
                temp = start;
                printf("\n Deleted item is %d",start->info);
                start = NULL;
                free(temp);
            }
            else
            {
                temp = start;
                while(temp->next->next!=NULL)
                temp = temp->next;
                hold = temp->next;
                temp->next = NULL;
                printf("\n The deleted item is %d",hold->info);
                free(hold);
                
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

                
        
        
