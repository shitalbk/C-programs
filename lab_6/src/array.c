int main()
{
	int a[10],n,i;
	printf("How many numbers[<=10]?: ");
	scanf("%d",&n);
	printf("Enter %d numbers : \n",n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The number you entered are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		
	}
}
