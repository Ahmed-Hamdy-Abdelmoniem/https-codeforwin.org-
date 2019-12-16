/*C program to create calculator using switch case and functions*/
#include <stdio.h>
int main(void)
{
	int num1 ,num2  ;
   char op ;	
	printf("please enter your numbers");
	scanf("%d %d",&num1 ,&num2);
	printf("please enter your operatin");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':
		printf("sum is %d",num1 + num2);
		break ; 
		case '-':
		printf("sub is %d",num1 - num2);
		break ; 
		case '*':
		printf("mul is %d",num1 * num2);
		break ; 
		case '/':
		printf("div is %d",num1 / num2);
		break ; 
		case '%':
		printf("rem is %d",num1 % num2);
		break ; 
		default:
		printf("error");
		break ; 
	}
	return 0 ; 
}

	
	