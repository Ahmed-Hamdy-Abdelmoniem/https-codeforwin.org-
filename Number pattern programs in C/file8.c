/*C program to print box number pattern of 1 and 0 with cross center*/
#include<stdio.h>
int main(void)
{
	int num , i,j ; 
	printf("pleae enter your number");
	scanf("%d",&num);
	for(i = 0; i <num ; i++)
	{
		for(j = 0 ; j<num ; j++)
		{
			if(i == 0 || i ==(num-1))
			{
				if(j == 0 || j ==(num-1))
				{
					printf("1");
				}
				else
				{
					printf("0");
				}
			}
			else if(i == num/2)
			{
				if(j == num/2)
				{
					printf("1");
				}
				else
				{
					printf("0");
				}
					
			}
			else
			{
				if(j%2==0)
				{
					printf("0");
				}
				else
				{
					printf("1");
				}
			}
		}
		printf("\n");
		
	}
	return 0 ; 
}
		
					
			
					
		