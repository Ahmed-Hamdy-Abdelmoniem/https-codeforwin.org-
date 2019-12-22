/*C program to find reverse of a number*/
#include<stdio.h>
int main(void)
{
	int num,digit,new = 0; 
	printf("please enter your number");
	scanf("%d",&num);
	while(num!=0)
	{
		digit = num %10 ; 
		new = new * 10 + digit;
		num = num / 10 ; 
	}
	printf("%d",new);
	return 0 ; 
}
		
		