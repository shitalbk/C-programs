#include<stdio.h>
void main()
{
int num[20];
int i,j,n,temp;
printf("How many numbers do you want to enter?(<=20)\n");
scanf("%d",&n);
printf("Please Enter %d numbers...\n",n);
for (i=0;i<n;i++)
{
printf("N%d = ",i+1);
scanf("%d",&num[i]); 
}
for (i=0;i<n-1;i++)
{
	
	for (j=i+1;j<n;j++)
	{
	   if(num[i]>num[j])
{
temp=num[i];
num[i]=num[j];
num[j]=temp;
}	
	}

printf("\nAscending Order(Bubble Sort):\n");
for (i=0;i<n;i++)
printf("%d\t",num[i]);
}
}
