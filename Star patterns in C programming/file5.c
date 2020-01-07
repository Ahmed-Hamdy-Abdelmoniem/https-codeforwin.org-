/*C program to print hollow rhombus, parallelogram star pattern*/
#include<stdio.h>
int main(void)

{
	int i,j,k, l = 4; 
	for( i = 0 ; i <9 ; i++)
	{
		if(i%2==1)
		{
			printf("\n");
		}
		else 
		{
			
			
			for(j = 0 ; j<l ; j++)
			{
				printf(" ");
				
			}
			
			for(k = 0 ;k <5 ; k++)
			{
				printf("*");
				
			}
			l-- ;
		}
	}
	
			
			
		
		
}