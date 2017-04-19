#include <stdio.h>

int main()
{
int i,n,j,res,fact;
for(i=1;i<=100;i++)
{
fact=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
fact=fact+1;
}
else;
}
if(fact==2)
printf("%d ",i);
else;
}
return 0;
}
