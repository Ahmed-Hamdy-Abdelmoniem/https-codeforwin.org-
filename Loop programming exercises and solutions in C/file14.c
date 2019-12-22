/*C program to find sum of digits of a number*/
#include<stdio.h>

int main(void)
{
	int num,sum=0 ; 
	printf("pleae enter your number");
	scanf("%d",&num);
	while(num!=0)
	{
		sum += num % 10 ;
        num = num /	10 ; 
	}
	printf("%d",sum);
	return 0 ;
}

	
	
	