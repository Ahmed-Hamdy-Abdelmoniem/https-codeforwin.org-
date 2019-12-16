/*6. Write a C program to toggle nth bit of a number.
*/
#include<stdio.h>
int main(void)
{
	int num , n ; 
	printf("please enter your number");
	scanf("%d",&num);
	printf("pleasecenter your bit ");
	scanf("%d",&n);
	num =num ^ (1<<n);
	printf("your new number is %d",num);
	return 0 ; 
}

	
	
	
	