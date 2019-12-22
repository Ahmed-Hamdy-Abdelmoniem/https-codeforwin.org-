/*C program to count number of digits in an integer*/
#include<stdio.h>
int main(void)
{
	int num,count = 0 ,rem ; 
	printf("please enter your number");
	scanf("%d",&num);
	if(num == 0)
	{
	count++;
	}
	while(num!=0)
	{
		rem = num %10 ; 
		count++;
		num = num /10 ; 
	}
	
		
	printf("%d",count);
	return 0 ; 
}

		