#include<stdio.h>
int main()
{
int i,n,t=11,sum=0;
printf("How many terms? ");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("%d ",t);
sum+=t;
t+=11;
}
printf("\n\nThe sum of the series is %d.",sum);
}
