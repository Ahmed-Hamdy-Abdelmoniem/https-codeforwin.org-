/*C program to find sum of first and last digit of any number*/
#include<stdio.h>
int main(void)
{
	int num,first ,last ; 
	printf("[lease enter your number");
	scanf("%d",&num);
	first = num %10 ; 
	num = num / 10 ; 
	
	while(num!=0)
	{
		last = num %10  ; 
		num = num /10 ; 
	}
	printf("%d",last + first);
	return 0 ; 
}
		
		
	
