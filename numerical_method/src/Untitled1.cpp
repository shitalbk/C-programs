#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,bb=255,wb=219;
 printf("\t\t\t\t");  
 for(i=0;i<8;i++)
 {
 	if(i%2==0)
 	{
 	for(j=0;j<8;j++)
 	{
 		if(j%2==0)
 		printf("%c",wb);
 		else
 		printf("%c",bb);
	}
 }
 else
 {
for(j=0;j<8;j++)
{
	if(j%2==0)
	printf("%c",bb);
	else
	printf("%c",wb);
}
 }
 printf("\n\t\t\t\t");
}
return(0);
getch();
}