/*C program to check whether a number is prime number or not*/
#include<stdio.h>
int main(void)
{
	int num , i  ; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 2 ; i <= num ; i++)
	{
		if(num % i ==0)
		{
			break ; 
		}
	}
	if(i == num || num  == 1 )
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
	return 0 ; 
}
		
		
		