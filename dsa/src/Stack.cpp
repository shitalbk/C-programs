// Lab Work 4 
/* Array Implementation of Stack */
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

struct stack
{
int items[MAX]; //Declaring an array to store items
int top; //Top of a stack
};
void create_empty_stack(struct stack *s); //function prototype
void push(struct stack *s);
void pop(struct stack *s);
void display(struct stack *s);
void stacktop(struct stack *s);
int isempty(struct stack *s);
int isfull(struct stack *s);

//Main Function
int main()
{
int choice;
struct stack s;
int flag=1;
create_empty_stack(&s); /* s->top=-1; indicates empty stack */
do
{
printf("\n\n MENU");
printf(" \n\n\t 1: Push ");
printf(" \n\n\t 2: Display ");
printf(" \n\n\t 3: Pop ");
printf("\n\n \t 4. Top");
printf(" \n\n\t 5: Exit");
printf("\n\n\n Enter of your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
		push(&s);
		break;
case 2:
		display(&s);
		break;
case 3:
		pop(&s);
		break;
case 4:
		stacktop(&s);
		break;
case 5:
		flag=0;
		break;
		 
default:
		printf("\n Invalid Choice");
}
}while(flag);
system("pause");
return 0;
}



/*Function to create an empty stack*/
void create_empty_stack(struct stack *s)
{
s->top=-1;
}

// function to display stack top element
void stacktop( struct stack *s)

{
printf("\n\n The stack top:");
printf("\n Index is %d\t ",s->top);
printf("\n Item value is %d\t",s->items[s->top]);
}


/*Function to check whether the stack is empty or not */
int isempty(struct stack *s)
{
if(s->top == -1)
return 1;
else
return 0;
}


/*function to check whether the stack is full or not*/
int isfull(struct stack *s)
{
if(s->top==MAX-1)
return 1;
else
return 0;
}


/* push() function definition */
void push(struct stack *s)
{
int element;
if(isfull(s)) /* Checking Overflow condition */
printf("\n \nThe stack is overflow: stack Full!!\n");
else
{
printf("\n Enter the number:");
scanf("%d", &element); /*Read an element from keyboard*/
s->items[++(s->top)]=element;
}
}


/* Function for displaying elements of a stack*/
void display(struct stack *s)
{
int i;
if(isempty(s))
printf("\nThe stack does not contain any Elements");
else
{
printf("\nThe elements in the stack :\n\n");
for(i=s->top;i>=0;i--)
printf("%d\n",s->items[i]);
}
}



/* the POP function definition*/
void pop(struct stack *s)
{
if(isempty(s))
printf("\n\n stack Underflow: Empty stack!!!");
else
printf("\n\nthe deleted item is %d:\t",s->items[s->top--]);
}
