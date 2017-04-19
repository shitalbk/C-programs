#include <stdio.h>
int main()
{
	int i,n;
	int *p;
      printf("How many no: ");
      scanf("%d",&n);
		p = (int *)malloc(sizeof(int)*n);
		for(i=0;i<n;i++)
		{
				scanf("%d",p+i);
		
		}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
}
