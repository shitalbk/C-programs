#include <stdio.h>
int main()
{
	int a[20],i,j,n,temp;
	char ch;
	
	printf("\na for ascending order");
	printf("\nd for decending order");
	printf("\nEnter your choice: ");
	scanf("%c",&ch);
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d numbers in the array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	
	switch(ch)
	{
		case 'a':
			
				for(i=0;i<n-1;i++)
			{
				for(j=0;j<(n-i-1);j++)
				{
					if(a[j]>a[j+1])
					{
						temp = a[j];
						a[j] = a[j+1];
						a[j+1] = temp;
					}
					
				}
			}
				for(i=0;i<n;i++)
                  	{
	             	printf("%d ",a[i]);
                  	}
		          	break;
			case 'd':
					for(i=0;i<n-1;i++)
			{
				for(j=0;j<(n-i-1);j++)
				{
					if(a[j]<a[j+1])
					{
						temp = a[j];
						a[j] = a[j+1];
						a[j+1] = temp;
					}
					
				}
			}
				for(i=0;i<n;i++)
                  	{
	             	printf("%d ",a[i]);
                  	}
                  	break;
                  	default:
                  		printf("\nPlease enter the correct character.Thank you");
				
	}
}
