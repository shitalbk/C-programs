#include <stdio.h>
int square(int);
int cube(int);
int compute(int (*)(int),int);
int main()
{
	int n,res;
	char ch;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("\nMENU\n");
	printf("s for square \n c for cube \n");
	printf("Enter your choice: ");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'c':
			case'C':
				{
					res = compute(cube,n);
					printf("cube =%d",res);
				}
				break;
				case 's':
					case 'S':
						{
							res = compute(square,n);
							printf("square = %d",res);
						}
						break;
						default:
							printf("Wrong choice!!");
	}
}
	int square(int n)
	{
		return (n*n);
	}
	int cube(int n)
	{
		return (n*n*n);
	}

