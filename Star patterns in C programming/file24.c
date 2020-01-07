/*C program to print right arrow star pattern*/
#include<stdio.h>
int main(void)
{
	int i,j,k,l=0; 
	for(i = 0 ;i<9; i++)
	{
		if(i <=4)
		{
			for(k = 1 ; k<=i;k++)
			{
				printf(" " );
				
			}
			for(j =5; j>i;j--)
			{
				printf("*");
			}
		}
		else
		{
			for(k =8; k>i;k--)
			{
				printf(" ");
				
			}
			for(j =i; j<=i;j++)
			{
				printf("*");
			}	
			l++;
		}
			
		printf("\n");
	}
	return 0 ; 
}
			