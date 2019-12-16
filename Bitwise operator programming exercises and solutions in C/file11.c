/*11. Write a C program to flip bits of a binary number using bitwise operator.
*/
#include<stdio.h>
int main (void)
{
	int num ; 
	printf("please enter your number\n");
	scanf("%d",&num);
	num = ~num ; 
	printf("your number is %d" , num);
	return 0 ; 
}

	