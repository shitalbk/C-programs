#include <stdio.h>
int main()
{

    int i=0;
	char sen[80];
	char ch;
	int vowel,consonant,digit,space,other;
	
	vowel = 0;
	consonant = 0;
	digit = 0;
	space = 0;
	other = 0;
	printf("Please enter a sentence: ");
	gets(sen);
	while((ch=sen[i])!='\0')
	{
		if(ch=='a'|| ch=='e'|| ch=='i' || ch=='o' || ch=='u')
		{
			vowel++;
		}
		else if(ch>='a' && ch<='z')
		{
			consonant++;
		}
		else if(ch>='0' && ch<='9')
		{
			digit++;
		}
		else if(ch==' ' || ch== '\t')
		{
			space++;
		}
		else
		{
		   other++;	 
		}
		
		i++;
	}
	printf("\nNumber of vowel is = %d",vowel);
	printf("\nNumber of consonant is = %d",consonant);
	printf("\nNumber of digit is = %d",digit);
	printf("\nNumber of space is = %d",space);
	printf("\nNumber of other is = %d",other);
}
