/*C program to find product of digits of a number*/
#include <stdio.h>
int main(void)
{
	int num ,  mul = 1; 
	printf("please enter your number");
	scanf("%d",&num);
	while(num != 0)
	{
		mul *= num%10 ; 
		num = num /10 ; 
	}
	printf("%d",mul);
	return 0 ; 
}

		