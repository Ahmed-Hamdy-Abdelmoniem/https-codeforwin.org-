/*C program to find maximum between two numbers*/
#include <stdio.h>
int main(void)
{
	int num1 , num2 ; 
	printf("please enter num1\n");
	scanf("%d",&num1);
	printf("please enter num2\n");
	scanf("%d",&num2);
	if(num1 >num2)
	{
		printf("%d is bigger than %d\n",num1,num2);
	}
	else if(num1 <num2)
	{
		printf("%d is bigger than %d\n",num2,num1);
	}
	else
	{
				printf("%d is equal %d",num2,num1);
	}
	return 0 ;
}


		
	
		
	
