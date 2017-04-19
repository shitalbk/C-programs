#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main()
{
   int ** a,i,j,r,c;
   
   printf("Enter rows and cols of matrix\n");
   scanf("%d %d",&r,&c);
   
   a = (int**)malloc(r*sizeof(int*));
   
   for(i=0;i<r;i++)
   {
                 *(a+i) = (int*)malloc(c*sizeof(int));
   }
   
   printf("Enter elements of matrix\n");
   for(i=0;i<r;i++)
   {
        for(j=0;j<c;j++)
        {
             scanf("%d",*(a+i)+j);
        }
 }                  
   printf("\n Matrix:\n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
         {
            printf("%d\t",*(*(a+i)+j));
         }
       printf("\n");
  }
for(i=0;i<r;i++)
{
   free(a[i]);                                                                                                                                
}
free(a);
getch();
//system("pause");
return 0; 
}
