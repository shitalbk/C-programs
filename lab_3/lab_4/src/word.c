#include<stdio.h>
void main()
{
char txt[80];
int i,j,l;
printf("Enter that a line of text...\n");
gets(txt);
l=0;
while(txt[l]!='\0')
l++;
for (i=0;txt[i]!='\0';i++)
{
if(txt[i]=='t'&&txt[i+1]=='h'&&txt[i+2]=='a'&&txt[i+3]=='t'&&(txt[i+4]==' '||txt[i+4]=='.'||txt[i+4]=='\0'))
{
for (j=i;txt[j]!='\0';j++)
txt[j]=txt[j+5];
i--;
}
}
printf("\nAfter deleting all the \"that\" word...\n");
printf("%s",txt);
}

