#include <stdio.h>
int main()
{
  char line[80];
  int i;
  printf("Enter a line of text: ");
  gets(line);
  i = 0;
  while(line[i]!= '\0')
  {
  	if(line[i]>=97 && line[i]<=122)
  	line[i] = line[i] - 32;
  	i++;
  }
  printf("After converting in uppercase your string is: \n");
  puts(line);
}
