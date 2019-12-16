/*2. Write a C program to find maximum between three numbers using conditional operator.
*/
#include<stdio.h>
int main(void)
{
	int num1 , num2 , num3 ,max; 
	printf("please enter your first number\n");
	scanf("%d",&num1);
	printf("please enter your second number\n");
	scanf("%d",&num2);
	printf("please enter your third number\n");
	scanf("%d",&num3);
	//max = ((num1>num2) && (num1>num3))?num1:(num2>num3?num2:num3);
    max = (num1>num2)?(num1>num3?num1:num3):(num2>num3?num2:num3);	
	printf("%d",max);
	return 0 ; 
}