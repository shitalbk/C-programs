// Lab Work 8 
/* Array Implementation of queue */
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

struct queue
{
	int items[MAX]; //Declaring an array to store items
	int rear; //rear of queue
	int front; // front of queue
};

void create_empty_queue(struct queue *q); //function prototype
void enqueue(struct queue *q);
void dequeue(struct queue *q);
void display(struct queue *q);
int isempty(struct queue *q);
int isfull(struct queue *q);

//Main Function
int main()
{
int choice;
struct queue q;
int flag=1;
create_empty_queue(&q); /* q->top=-1; indicates empty queue */
do
{
printf("\n\n MENU");
printf(" \n\n\t 1: Enqueue ");
printf(" \n\n\t 2: Display ");
printf(" \n\n\t 3: Dequeue ");
printf(" \n\n\t 4: Exit");
printf("\n\n\n Enter of your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
		enqueue(&q);
		break;
case 2:
		display(&q);
		break;
case 3:
		dequeue(&q);
		break;
case 4:
		flag=0;
		break;
		 
default:
		printf("\n Invalid Choice");
}
}while(flag);
system("pause");
return 0;
}



/*Function to create an empty queue*/
void create_empty_queue(struct queue *q)
{
	q->rear=-1;
	q->front =0;
}

/*Function to check whether the queue is empty or not */
int isempty(struct queue *q)
{
	if(q->rear<q->front)
		return 1;
	else
		return 0;
}

/*function to check whether the queue is full or not*/
int isfull(struct queue *q)
{
	if(q->rear==MAX-1)
		return 1;
	else
		return 0;
}
/* push() function definition */
void enqueue(struct queue *q)
{
	int element;
	if(isfull(q)) /* Checking Overflow condition */
		printf("\n \nThe queue is overflow: queue Full!!\n");
	else
	{	
		printf("\n Enter the number:");
		scanf("%d", &element); /*Read an element from keyboard*/
		q->items[++(q->rear)]=element;
	}
}

/* Function for displaying elements of a queue*/
void display(struct queue *q)
{
	int i;
	if(isempty(q))
		printf("\nThe queue does not contain any Elements");
	else
	{
		printf("\nThe elements in the queue :\n\n");
		for(i=q->front;i<=q->rear;i++)
			printf("%d\n",q->items[i]);
	}
}

/* the POP function definition*/
void dequeue(struct queue *q)
{
	if(isempty(q))
		printf("\n\n queue Underflow: Empty queue!!!");
	else
	{
		printf("\n\nthe deleted item is %d:\t",q->items[q->front]);
		q->front = q->front +1;
	}
 }
