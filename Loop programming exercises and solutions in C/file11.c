/*C program to find first and last digit of any number*/
#include <stdio.h>
int main(void)
{
	int num ,first,second; 
	printf("please enter your number");
	scanf("%d",&num);
	first = num%10;
	num = num/10 ; 
	while(num!=0)
	{
		second = num %10;
		num = num /10 ; 
	}
	printf("%d  %d",second,first);
	return 0 ; 
}

	
		