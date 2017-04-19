#include <stdlib.h>
#include <stdio.h>
int main()
{
	 int i,n;
    int *p;
	printf("How many nos: ");
	scanf("%d",&n);
	p = (int *)malloc(sizeof(int)*n);
	printf("Enter %d nos:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
    }
		printf("Nos you entered are:\n");

		for(i=0;i<n;i++)
		{
			printf("%d\t",*(p+i));
		}
	
	   free(p);
}


 
