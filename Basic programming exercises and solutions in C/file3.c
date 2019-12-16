/*3. Write a C program to enter two numbers and perform all arithmetic operations.*/
#include<stdio.h>
int main(void)
{
	int num1 , num2 , sum,sub,mul,div,mod;
	printf("please enter your first number\n");
	scanf("%d",&num1);
	printf("please enter your second number\n");
	scanf("%d",&num2);
	sum = num1 + num2 ; 
	sub= num1 - num2 ; 
	mul = num1 * num2 ; 
	div = num1 / num2 ; 
	mod = num1 % num2 ; 
	printf("the sum is %d\n",sum);
	printf("the sub is %d\n",sub);
	printf("the mul is %d\n",mul);
	printf("the div is %d\n",div);
	printf("the mod is %d\n",mod);
	return 0; 
}


	
	

	
