/*C program to print X star pattern*/
#include<stdio.h>
int main(void)
{
	int i,j,k ; 
	for(i = 0 ; i<9 ; i++)
	{
		if(i<=4)
		{
			for( j= 0 ; j<9;j++)
			{
				if(j==i || (j==(8-i)))
				{
					printf("*");
				}
				else
				{	
					printf(" ");
				}
			}		
			
		}
		else
		{
			for( j= 0 ; j<9;j++)
			{
				if(j==i || (j==(8-i)))
				{
					printf("*");
				}
				else
				{	
					printf(" ");
				}
			}		
			
		}
		printf("\n");
		
	}
return 0 ; 
}		
			