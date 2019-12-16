/*3. Write a C program to get nth bit of a number.
*/
#include<stdio.h>
int main(void)
{
	int num , n ; 
	printf("please enter your number");
	scanf("%d",&num);
	printf("please enter your bit number");
	scanf("%d",&n);
	printf("the value is %d",(num>>n&1));
	return 0 ; 
}
	