#include <stdio.h>
int main()
{
	char c = 124;
	char d = 45;
	char e = ' ';
   int i,j,k;
   printf("    ");
   for(i =1;i<=10;i++)
   {
   	 printf("\%5d",i);
   }
   printf("\n");
   for(k=1;k<=60;k++)
   {
   	 printf("%c",d);
   }
   printf("\n");
  
    for(i =1;i<=10;i++)
   {
   	
   	if(i==10){
   	 printf("%c%c%c",e,e,e);
   	 printf("%c",c);
		printf("\n ");
   	 printf("%d%c",i,c);	
   	}
   	else{ 
	 printf("%c%c%c",e,e,e);
   	 printf("%c",c);
   	 printf("\n ");
   	 printf("%d%c%c",i,e,c);
   	}   	
	 
   	 
   	 for(j=1;j<=10;j++)
   	{
   		k = i*j;
   		printf("%5d",k);
   	}
   	printf("\n");
   }
  for(k=1;k<=60;k++)n
   {
   	 printf("%c",d);
   }
}
