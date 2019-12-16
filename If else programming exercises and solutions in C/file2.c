/*C program to find maximum between three numbers*/
#include<stdio.h>
int main(void)
{
	int num1 , num2 , num3 ; 
	printf("please enter num1\n");
	scanf("%d",&num1);
	printf("please enter num2\n");
	scanf("%d",&num2);
	printf("please enter num3\n");
	scanf("%d",&num3);
	if((num1>num2) &&  (num1>num3))
	{
		printf("%d is the biggest one",num1);
	}
	else if((num2>num3))
	{
		printf("%d is the biggest one",num2);
		
	}
	else if((num3>num2))
	{
		printf("%d is the biggest one",num3);
		
	}
	
	else
	{
		printf("all are the same");
		
	
	}
	return 0 ; 
}
	
	
		
		