#include <stdio.h>
int main()
{
   int i,j;
   char name[20][20];
   int n;
   printf("How many name's of students do you want to enter: ");
   scanf("%d",&n);
   printf("Please enter the %d name of the students:\n",n);
   for(i=0;i<n;i++)
   {
   	scanf("%s",&name[i]);
   }
   printf("The name you entered are:\n");
   for(i=0;i<n;i++)
   {
   	printf("%s ",name[i]);
   }
}
