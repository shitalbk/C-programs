//Lab work : 1
/*Array handling with menu program*/
#include<stdio.h>
#include<stdlib.h>

void insert(int a[100], int *n);
void delet(int a[100], int *n);
void searching(int a[100], int *n);
void display(int a[100], int *n);
void traverse(int a[100], int *n);
void modify(int a[100], int *n);


int main()
{
    int a[100];
    
    
     int n,i, choice;
    
     printf("\n\nEnter number of elements to be inserted\n");
     scanf("%d",&n);
     printf("\n\nEnter %d numbers\n",n);
     for(i=0;i<n;i++)
     {
           scanf("%d",&a[i]);
     }
                     
   do{ 
	  printf("\n\n\n");  
        printf("\nMenu of Program\n"); 
        printf("\n\n\n 1. Insert \n 2. Delete \n 3. Traverse ");
	  printf("\n 4. Modify \n 5. Searching \n 6. Display\n 7. Exit");
                   
        printf("\n\nEnter your choice\t");                                 
        scanf("%d",&choice);
                     
        switch(choice)
           {
                   
                case 1:
                        insert(a,&n);
                         break;
                case 2:
                         delet(a,&n);
                         break;
               case 3:
                         traverse(a,&n);
                         break;
               case 4:
                         modify(a,&n);
                         break;
               case 5:
                         searching(a,&n);
                         break;
                case 6:
                         display(a,&n);
                         break;
               case 7:
                        exit(1);
                        break;
               defualt:
                        printf("\n Invalid choice!");
                             
            }
      } while(choice<7);
	
      system("pause");	
      return 0;
    }
void insert(int a[100], int* x)
{
    int pos, nel, i;
    printf("\n\nEnter position to insert new element\t\t");
    scanf("%d", &pos);
    printf("\n\nEnter new element\t\t");
    scanf("%d", &nel);
    for(i=*x-1; i>=pos; i--)
    {
          a[i+1] = a[i];
    }  
   a[pos]=nel;
   *x=*x+1;
 
}
                                                                           
void delet(int a[100], int *n)
{
 int pos, i;
 printf("\n\nEnter position at which you want to delete an element\t\t");
 scanf("%d", &pos);
 for(i=pos; i<*n; i++)
 {
            a[i] = a[i+1];
 }
  *n=*n-1;

}                                      

void traverse(int a[100], int * n)
{
     int i;
     printf("\nElements of array are:\n");
     for(i=0;i<*n;i++)
     {
         printf("%d\t",a[i]);
     }
}

void searching(int a[100], int * n)
{
    int k,i;
    printf("\n\nEnter searched item\t\t");
    scanf("%d",&k);
    for(i=0;i<*n;i++)
     {
         if(k==a[i])
            {
                printf("\n\n successful search!!!");
                break;
             }
     }
    if(i==*n)
    printf("\n\n unsuccessful search!!");
 }

void modify(int a[100], int* n)
{
     int i, pos,nel;
     
     printf("\nEnter the position to be modified \t");
     scanf("%d",&pos);
     printf("\nEnter the new value\t");
     scanf("%d",&nel);
     
     a[pos] = nel;
}    

void display(int a[100], int *n)
{
     printf("\n\nThe array is:\n\n");
     for(int i=0;i<*n;i++)
     {
             printf("%d\t",a[i]);
     }
} 
                     
