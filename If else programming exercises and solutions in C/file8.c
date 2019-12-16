/*C program to check vowel or consonant*/
#include<stdio.h>
int main(void)
{
	char letter ; 
	printf("please enter your letter");
	scanf(" %c",&letter);
	if(letter == 'i'  ||letter == 'I'  || letter == 'e'  || letter == 'E'  || letter == 'o'  || letter == 'O'  || letter == 'u'  || letter == 'U'  || letter == 'a'  || letter == 'A')
	{
		printf("%c is vowel",letter);
	}
	else
	{
				printf("%c is  not vowel",letter);
	}
	return 0 ; 
}


		
		