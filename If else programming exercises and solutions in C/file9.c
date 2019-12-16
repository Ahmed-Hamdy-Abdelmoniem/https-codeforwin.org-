/*C program to check whether a character is alphabet, digit or special character*/
#include<stdio.h>
int main(void)
{
	char x ; 
	printf("please enter your character\n");
	scanf(" %c",&x);
	if((x>='a' && x<='z') || (x>='A' && x<='Z'))
	{
		printf(" %c is  alphabet",x);
	}
	else if (x>='0' && x<='9')
	{
		printf("%c is  digit",x);
	}
	else
	{
		printf(" %c is special character",x);
	}
	return 0 ; 
}

		
		