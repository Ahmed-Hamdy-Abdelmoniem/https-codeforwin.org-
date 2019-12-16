/*C program to check whether a character is Uppercase or Lowercase*/
#include<stdio.h>
int main(void)
{
	char x ; 
	printf("please enter your alphapet\n");
	scanf(" %c",&x);
	if(x>='a' && x<='z')
	{
		printf(" %c is lower case",x);
	}
	else if(x>='A' && x<='z')
	{
		printf(" %c is upper case",x);
	}
	else
	{
		printf(" %c is not alpha ",x);
	}
	return 0 ; 
}

		
	