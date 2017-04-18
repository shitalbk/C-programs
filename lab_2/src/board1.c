#include <stdio.h>
#include<conio.h>
int main()
{
int n,r,c;
int white=219,black=255;
char b,w;
printf("Enter n:");
scanf("%d",&n);
w=(char)white;
b=(char)black;
for(r=2;r<=n+1;r++)
{
if(r%2==0)
{
for(c=1;c<=n;c++)
{
if(c%2==0)
{
printf("%c",b);
}
else
{
printf("%c",w);
}
}
}
else
{
for(c=1;c<=n;c++)
{
if(c%2==0)
{
printf("%c",w);
}
else
{
printf("%c",b);
}
} 
}
printf("\n");
}
getch();
return 0;
}
