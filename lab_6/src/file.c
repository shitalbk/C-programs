#include <stdio.h>
#include <conio.h>
int main()
{
	FILE *fp;
	char ch;
	fp = fopen("sample.txt","r");
	if(fp==NULL)
	printf("File not found");
	else{
		while((ch=getc(fp))!=EOF)
		putchar(ch);
	}
	 fclose(fp);
	getch();
}
