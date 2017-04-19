#include <stdio.h>
void read_line(char[],int *c,int *v,int *d,int *w,int *o);
int main()
{
	char line[80];
	int cc = 0;
	int vc = 0;
	int dc = 0;
	int wc = 0;
	int oc = 0;
	printf("Enter a line of text:\n");
	scanf("%[^\n]",line);
	read_line(line,&cc,&vc,&dc,&wc,&oc);
	printf("Result is:\n");
	printf("\nNo. of consotant = %d",cc);
    printf("\nNo. of vowel = %d",vc);
    printf("\nNo. of digit = %d",dc);
    printf("\nNo. of white = %d",wc);
    printf("\nNo. of other = %d",oc);		
}
void read_line(char line[],int *c,int *v,int *d,int *w,int *o)
{
	char ch;
	int i=0;
	while((ch = toupper(line[i]))!='\0')
	{
		if(ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U')
		{
			++*v;
		}
		else if(ch>='A' && ch<='Z')
		{
			++*c;	
		}
		else if(ch>='0' && ch<='9')
		{
			++*d;
		}
		else if(ch==' ' || ch=='\t')
		{
			++*w;
		}
		else
		++*o;
		i++;
	}
}
