//lab work 7 (d) Tower of Hanoi Problem
#include<stdio.h>
#include<stdlib.h>

void toh(int, char, char,char);

int main()
{
	int n;
	
	printf("Enter the number of disks");
	scanf("%d",&n);
	
	printf("\n The sequence of moves in TOH are:\n");
	toh(n,'A','C','B');
	printf("\n\n");
	
	system("pause");
	return 0;


}

void toh(int n, char frompeg, char topeg, char auxpeg )
{
	if (n==1)
	{
		printf("\n Move disk %d from peg %c to peg %c",n,frompeg,topeg);
		
	}
	else
	{
		toh(n-1,frompeg,auxpeg,topeg);
		printf("\n move disk %d from peg %c to peg %c",n,frompeg,topeg);
		toh(n-1,auxpeg,topeg,frompeg);
		
	}
}
