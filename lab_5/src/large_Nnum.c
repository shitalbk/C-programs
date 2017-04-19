#include <stdio.h>
int large(int l);
int main()
{
	int l;
	printf("The large number is %d",large(l));
}
int large(int l)
{
    int i,lar,num[20] = {1,2,3,4,5,166,77,23,45,87,312,11,10,22};
    lar = num[0];
    for(i=0;i<20;i++)
    {
    	if(lar<num[i])
    	{
    		lar = num[i];
    	}
    }
    return lar;
}
