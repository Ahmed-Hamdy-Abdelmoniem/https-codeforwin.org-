/*1. Write a C program to find maximum between two numbers using conditional operator.
*/
#include<stdio.h>
int main(void)
{
	int num1 , num2 ;
    printf("please enter your first number\n");
	scanf("%d",&num1);
	printf("please enter your second number\n");
	scanf("%d",&num2);
	(num1>num2)? printf("%d is the highst number",num1):printf("%d is the highst number",num2);
    return 0 ; 
}	
	