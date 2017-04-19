// Lab Work 10
/* Array Implementation of circular cqueue using external counter*/
#include<stdio.h>
#include<stdlib.h>
  #define MAX 5

struct cqueue
{
int items[MAX]; //Declaring an array to store items
int rear; //rear of cqueue
int front; // front of cqueue
};
void create_empty_cqueue(struct cqueue *q); //function prototype
void enqueue(struct cqueue *q);
void dequeue(struct cqueue *q);
void display(struct cqueue *q);
int isempty(struct cqueue *q);
int isfull(struct cqueue *q);

int counter =0;
//Main Function
int main()
{
int choice;
struct cqueue q;
int flag=1;
create_empty_cqueue(&q); /* q->top=-1; indicates empty cqueue */
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



/*Function to create an empty cqueue*/
void create_empty_cqueue(struct cqueue *q)
{
q->rear=MAX-1;
q->front =MAX-1;
}




/*Function to check whether the cqueue is empty or not */
int isempty(struct cqueue *q)
{
if(counter==0)
return 1;
else
return 0;
}


/*function to check whether the cqueue is full or not*/
int isfull(struct cqueue *q)
{
if(counter == MAX)
return 1;
else
return 0;
}


/* push() function definition */
void enqueue(struct cqueue *q)
{
int element;
if(isfull(q)) /* Checking Overflow condition */
printf("\n \nThe cqueue is overflow: cqueue Full!!\n");
else
{
printf("\n Enter the number:");
scanf("%d", &element); /*Read an element from keyboard*/
q->rear= (q->rear+1)%MAX;
q->items[q->rear]=element;
counter++;
}
}


/* Function for displaying elements of a cqueue*/
void display(struct cqueue *q)
{
int i;
if(isempty(q))
printf("\nThe cqueue does not contain any Elements");
else
{
printf("\nThe elements in the cqueue :\n\n");
for(i=(q->front+1)%MAX;i!=q->rear;i=(i+1)%MAX)

printf("%d\n",q->items[i]);
printf("%d\n",q->items[	q->rear]);
}
}



/* the POP function definition*/
void dequeue(struct cqueue *q)
{
if(isempty(q))
printf("\n\n cqueue Underflow: Empty cqueue!!!");
else
{
q->front = (q->front +1)%MAX;
printf("\n\nthe deleted item is %d:\t",q->items[q->front]);
counter--;
}


  }
