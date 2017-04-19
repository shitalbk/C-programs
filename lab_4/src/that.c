#include <stdio.h>
int main()
{
	int i,j;
	char str[80];
  	printf("Enter a string: ");
  	gets(str);
  	for(i=0;str[i]!='\0';i++)
  	{
  		if(str[i]=='t' && str[i+1]=='h' && str[i+2]=='a' && str[i+3]=='t')
  		{
  			for(j=i;str[j]!='\0';j++)
			{
			
				str[j] = str[j+5];
	      	}
  	}	
}
puts(str);
}


