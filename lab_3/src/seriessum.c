#include <stdio.h>
int main()
{
	int i,n,j,k,sum = 0,sum1=0;
	printf("Enter the nth terms less than eleven: ");
	scanf("%d",&n);
	for(i = 1;i<=n;i++)
	{
	  printf("%d\t",i);
	 sum = sum +i;
	  }
     	printf("\n");
     	for(i=1;i<=n ;i++)
     	{
     		printf("--\t");
     	}
	 printf("\n");
	 for(j=1;j<=n;j++)
	  {
	  k= ((2*j)-1) * ((2*j)-1);
	  	 printf("%d\t",k);
	  	sum1= sum1+ k;
	  }
	  printf("\n");
      printf("\n%d",sum);
      printf("\n--");
      printf("\n%d",sum1);
	   
	
}
