/*C program to print number in words*/
#include<stdio.h>
int main(void)
{
	int num ,digit ,num_1,i=0;
	
	printf("please enter your number");
	scanf("%d",&num);
		
	while(num != 0 )
	{
		digit = num % 10 ; 
		if(digit == 0 )
		{
			printf("zero ");
		}
		else if(digit == 1)
		{
			printf("one ");
		}
		else if(digit == 2)
		{
			printf("two ");
		}
		else if(digit == 3)
		{
			printf("three ");
		}
		else if(digit == 4)
		{
			printf("four ");
		}
		else if(digit == 5)
		{
			printf("five ");
		}
		else if(digit == 6)
		{
			printf("six ");
		}
		else if(digit == 7)
		{
			printf("seven ");
		}
		else if(digit == 8)
		{
			printf("eight ");
		}
		else if(digit == 9)
		{
			printf("nine ");
		}
		num = num / 10 ; 
	}
	return 0 ;
}	
			
			
		