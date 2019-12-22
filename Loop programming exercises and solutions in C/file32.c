/*C program to check whether a number is perfect number or not*/
#include<stdio.h>
int main(void)
{
	unsigned int num , i ,sum = 0; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 1 ;i<num;i++)
	{
		if((num % i) ==0 )
		{
			sum += i ;
		}
	}
	if(num == sum)
	{
		printf("it is  adivisor");
	}
	return 0 ; 
}

	
