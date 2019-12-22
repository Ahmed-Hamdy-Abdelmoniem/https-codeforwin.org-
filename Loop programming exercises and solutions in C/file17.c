/*C program to check whether a number is palindrome or not*/
#include <stdio.h>
int main (void)
{
	int num , num1,digit ,num_r = 0 ; 
	printf("pleae enter your number");
	scanf("%d",&num);
	num1 = num ;
	while(num != 0 )
	{
		digit = num % 10 ; 
	
		num_r = num_r *10 + digit ;
		num = num / 10 ; 
	}
	if(num_r == num1)
	{
		printf("palindrome");
	}
	else 
	{
				printf(" not palindrome ");
	}
	return 0 ; 
}

		
		
		
	