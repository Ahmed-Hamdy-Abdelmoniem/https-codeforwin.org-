/*C program to print chessboard number pattern with 1 and 0*/
#include<stdio.h>
int main(void)
{
	int num,i ,j; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i=0 ; i <num ; i++)
	{
		for(j = 0 ; j<num ; j++)
		{
			if(i%2==0)
			{
				if(j%2==0)
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
	
		
				
					
	