#include<stdio.h>
main()
{
FILE *f1,*f2,*f3;
int number,I;
printf("Contents of the data filenn");
f1=fopen("DATA","W");
for(I=1;I< 30;I++)
{
scanf("%d",&number);
if(number==-1)
break;
putw(number,f1);
}
fclose(f1);
f1=fopen("DATA","r");
f2=fopen("ODD","w");
f3=fopen("EVEN","w");
while((number=getw(f1))!=EOF)/* Read from data file*/
{
if(number%2==0)
putw(number,f3);/*Write to even file*/
else
putw(number,f2);/*write to odd file*/
}
fclose(f1);
fclose(f2);
fclose(f3);
f2=fopen("ODD","r");
f3=fopen("EVEN","r");
printf("nnContents of the odd filenn");
while(number=getw(f2)!=EOF)
{

printf("%d%d",number);
printf("nnContents of the even file");
}
while(number=getw(f3)!=EOF)
printf("%d",number);
fclose(f2);
fclose(f3);
}
