#include<stdio.h>

int main()
{
int white = 219,black = 255;
char w,b;
w = (char)white;
b = (char)black;
int i,j;
for(i=1;i<=6;i++)
{
	if(i%2==0){
	for(j=1;j<=6;j++)
	{
		
		if(j%2==0)
		{
			printf("%c",w);
		}
		else
		printf("%c",b);
	}
	printf("\n");	
	}
	else{
		for(j=1;j<=6;j++)
	{
		
		if(j%2==0)
		{
			printf("%c",b);
		}
		else
		printf("%c",w);
	}
	printf("\n");	
	}
	}
	
}



