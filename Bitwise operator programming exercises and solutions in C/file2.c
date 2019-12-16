/*2. Write a C program to check Most Significant Bit (MSB) of a number is set or not.
*/
#include<stdio.h>
int main(void)
{
	int num  ; 
	printf("please  enter your number\n");
	scanf("%d",&num);
	if(num & (1<<31))
	{
		printf("the msb is one");
	}
	else
	{
		printf("the msb is zero");
	}
	return 0; 
}
		