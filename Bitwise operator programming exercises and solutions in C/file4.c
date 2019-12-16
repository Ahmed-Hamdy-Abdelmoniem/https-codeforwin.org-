/*4. Write a C program to set nth bit of a number.
*/
#include<stdio.h>
int main(void)
{
	int num , n ; 
	printf("please ener your number");
	scanf("%d",&num);
	printf("please enter n bits");
	scanf("%d",&n);
	num|=(1<<n);
	printf("your new number is %d",num);
	return 0 ; 
}
