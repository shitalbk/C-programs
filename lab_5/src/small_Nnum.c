#include <stdio.h>
int small(int s);
int main()
{
	int s;
	printf("The smallest number is %d",small(s));
}
int small(int s)
{
	int i,small,num[20] = {11,23,24,43,23,22,15,54,44,876,4,12,122,3,5,9,44,22,13,24};
	small = num[0];
	for(i=0;i<20;i++)
	{
		if(small>num[i])
		{
			small = num[i];
		}
	}
	return small;
}
