/*1. Write a C program to check Least Significant Bit (LSB) of a number is set or not.
*/
#include<stdio.h>
int main(void)
{
	int num , checker =1 ;
	printf("please enter your number");
	scanf("%d",&num);
	checker = checker & num ; 
	printf("the lsb is %d",checker);
	return 0 ; 
}
	