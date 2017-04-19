#include <stdio.h>
int main()
{
		int i,j,r,c,dia,tia=0;
	    int a[3][3];
       printf("Enter the order of the matrix less than 3*3: ");
       scanf("%d%d",&r,&c);
       printf("Enter the numbers in the %d * %d matrix:\n ",r,c);
       for(i=0;i<r;i++)
       {
       	for(j=0;j<c;j++)
       	{
       		printf("a[%d][%d] = ",i,j);
       		scanf("%d",&a[i][j]);
       	}
       }
       printf("The numbers you entered are: \n");
       for(i=0;i<r;i++)
       {
       	for(j=0;j<c;j++)
       	{
       		
       		printf("%d\t",a[i][j]);
       	}
       	printf("\n");
       }
      if(r==c)
	  {
      	i=0;j=0;
      	while(i<r && j<c)
      	{
      		dia+= a[i][j];
      		i++;
      		j++;
      	}
      	i=0;j=c-1;
      	while(i<r && j>=0)
      	{
      		tia+= a[i][j];
      		i++;
      		j--;
      	}
      	    
      }
      printf("\nThe sum of principal diagonal matrix is %d ",dia);
      	 printf("\nThe sum of other diagonal matrix is %d ",tia);
      
     
}
        
       
       
      
   
