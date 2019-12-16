/*C program to check whether a character is alphabet or not*/
#include<stdio.h>
int main(void)
{
	char letter ; 
	printf("please enter your letter");
	scanf(" %c",&letter);
	if((letter>='a' && letter <= 'z') || (letter>='A' && letter <= 'Z'))
	{
		printf("%C is alphabet",letter);
	}
	else
	{
		printf("%C is not alphabet",letter);
	}
	return 0 ; 
}

		