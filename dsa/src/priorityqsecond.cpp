// Lab Work 11(b)
/* Array Implementation of Priority queue with 
unordered array implementation using circular queue 
keeping one cell empty */
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

struct pqueue
{
int items[MAX]; //Declaring an array to store items
int rear; //rear of pqueue
int front; // front of pqueue
};
void create_empty_pqueue(struct pqueue *q); //function prototype
void insert(struct pqueue *q);
void deleteMin(struct pqueue *q);
void display(struct pqueue *q);
int isempty(struct pqueue *q);
int isfull(struct pqueue *q);
int findmin(struct pqueue *q);

//Main Function
int main()
{
int choice;
struct pqueue q;
int flag=1;
create_empty_pqueue(&q); /* q->top=-1; indicates empty pqueue */
do
{
printf("\n\n MENU");
printf(" \n\n\t 1: Insert ");
printf(" \n\n\t 2: Display ");
printf(" \n\n\t 3: DeleteMin ");
printf(" \n\n\t 4: Exit");
printf("\n\n\n Enter of your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
		insert(&q);
		break;
case 2:
		display(&q);
		break;
case 3:
		deleteMin(&q);
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



/*Function to create an empty pqueue*/
void create_empty_pqueue(struct pqueue *q)
{
q->rear=MAX-1;
q->front =MAX-1;
}

/*Function to check whether the pqueue is empty or not */
int isempty(struct pqueue *q)
{
if(q->rear==q->front)
return 1;
else
return 0;
}

/*function to check whether the pqueue is full or not*/
int isfull(struct pqueue *q)
{
if(q->front==(q->rear+1)%MAX)
return 1;
else
return 0;
}


/* push() function definition */
void insert(struct pqueue *q)
{
 int element;
 int i,j;
 int flag=0;
if(isfull(q)) /* Checking Overflow condition */
printf("\n \nThe pqueue is overflow: pqueue Full!!\n");
else
{
	printf("\n Enter the number:");
	scanf("%d", &element); /*Read an element from keyboard*/
	q->rear= (q->rear+1)%MAX;
	q->items[q->rear]=element;

}	
}


/* Function for displaying elements of a pqueue*/
void display(struct pqueue *q)
{
int i;
if(isempty(q))
printf("\nThe pqueue does not contain any Elements");
else
{
printf("\nThe elements in the pqueue :\n\n");
for(i=(q->front+1)%MAX;i!=q->rear;i=(i+1)%MAX)
	printf("%d\n",q->items[i]);
printf("%d\n",q->items[	q->rear]);
}
}


/* the POP function definition*/
void deleteMin(struct pqueue *q)
{
	int minLoc,i;
if(isempty(q))
printf("\n\n pqueue Underflow: Empty pqueue!!!");
else
{
 minLoc = findmin(q);
 printf("\n\n the deleted item is %d:\t",q->items[minLoc]);
 if(minLoc==q->rear && minLoc==0)
    q->rear=MAX-1;
 else
 
 {	
 for(i=minLoc;i!=q->rear;i=(i+1)%MAX)
	q->items[i]= q->items[i+1];
q->items[q->rear] = q->items[q->rear+1];
q->rear=q->rear-1;
}


}


}

int findmin(struct pqueue *q)
{
	int min = q->items[(q->front+1)%MAX];
	int i,minloc=(q->front+1)%MAX;
	
	for(i=minloc;i<=q->rear;i=(i+1)%MAX)
	{
	
		if(q->items[i]<min)
		  {
		  	min = q->items[i];
		  	minloc= i;
		  }
		
	}
	
	return minloc;
	
}
