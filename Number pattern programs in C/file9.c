/*C program to print circle box number pattern with 1 and 0*/
#include<stdio.h>
int main(void)
{
	int num ,i,j; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 0 ;i <num ; i++)
	{
		for(j= 0 ;j <num ; j++)
		{
			if(i==0 |i==(num-1))
			{
				if(j==0 |j==(num-1))
				{
					printf("0");
				}
				else
				{
					printf("1");
				}
			}
			else
			{
				if(j==0 |j==(num-1))
				{
					printf("1");
				}
				else
				{
					printf("0");
				}
			}
		}
		printf("\n");
	}
	return 0 ; 
}
					
					
					
					
				
		
	
	