/*C program check whether a number is even or odd*/
#include<stdio.h>
int main(void)
{
	int num ; 
	printf("please enter your number");
	scanf("%d",&num);
	if((num%2) == 0 )
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd",num);
	}
	return 0 ; 
}

		