#include<stdio.h>
void main()
{
char t1[20],t2[10];
int i,j;
printf("Enter first word:\n");
gets(t1);
printf("Enter second word:\n");
gets(t2);
printf("\nAfter concatenating the two words.....\n");
for (j=0;t1[j]!='\0';j++);
for (i=0;t2[i]!='\0';i++)
{
t1[j+i]=t2[i];
}
t1[j+i]='\0';
printf("%s",t1);
}

