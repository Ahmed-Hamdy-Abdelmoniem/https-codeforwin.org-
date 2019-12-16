/*16. Write a C program to check whether a number is even or odd using bitwise operator.
*/
#include<stdio.h>
int main(void)
{
	int num ; 
	printf("please enter your number");
	scanf("%d",&num);
	if(num&1)
	{
		printf("odd");
	}
	else
	{
		printf("even");
	}
	return 0 ; 
}
