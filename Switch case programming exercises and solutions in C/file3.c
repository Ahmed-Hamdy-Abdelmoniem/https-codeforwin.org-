/*C program to check vowel or consonant using switch case*/
#include <stdio.h>
int main(void)
{
	char x ; 
	printf("please enter your character\n");
	scanf("%c",&x);
	switch(x)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("vowel");
		break ; 
		default:
		printf("constant");
		break ; 
	}
	return 0 ; 
}

		
		
	