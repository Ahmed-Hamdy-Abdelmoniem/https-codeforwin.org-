/*C program to print left arrow star pattern*/
#include<stdio.h>
int main(void)
{
	int i , j,k ;
	for(i =0 ;i<9;i++)
	{
		if(i<=4)
		{
			for(k = 4 ; k>i; k--)
			{
				printf(" ");
			}
			for(j = 5 ; j>i; j--)
			{
				printf("*");
				
			}
			
				
		}
		else
		{
			for(k =5 ; k<=i; k++)
			{
				printf(" ");
			}
			for(j = 4 ; j<=i; j++)
			{
				printf("*");
				
			}		
		}
		printf("\n");
	}

	return 0 ; 
}
		
		
			