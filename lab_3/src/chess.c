#include <stdio.h>
int main()
{
int i,j,k;
char black = 255;
char white = 219;

for(k=1;k<=4;k++)
{
 	for(i=1;i<=4;i++)
{
	printf("          ");
	printf("%c",black);
	printf("%c",white);
}
printf("\n");
	for(j=1;j<=4;j++)
	{
	 	printf("%c",white);
	 	printf("%c",black);
		
	}	
	printf("\n");
}

}




