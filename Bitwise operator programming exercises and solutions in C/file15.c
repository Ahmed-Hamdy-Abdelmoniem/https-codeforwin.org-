/*15. Write a C program to swap two numbers using bitwise operator.
*/
#include<stdio.h>
int main(void)
{
	int num1 , num2 ; 
	printf("pease enter your first number");
	scanf("%d",&num1);
	printf("pease enter your second number");
	scanf("%d",&num2);
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	printf(" first is %d\n",num1);
	printf(" second is %d\n",num2);
	return 0 ; 
}
	
	
	
