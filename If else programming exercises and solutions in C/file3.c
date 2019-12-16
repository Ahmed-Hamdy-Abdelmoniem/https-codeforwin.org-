/*C program to check whether a number is positive, negative or zero*/
#include<stdio.h>
int main(void)
{
	int num ; 
	printf("please enter our number\n");
	scanf("%d",&num);
	if(num>0)
	{
		printf("%d is +ve",num);
	}
	else if(num == 0 )
	{
		printf("%d is zero ",num);
	}
	else
	{
		printf("%d is -ve",num);
	}
	return 0 ; 
}

		
		