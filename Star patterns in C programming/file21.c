/*C program to print mirrored half diamond star pattern*/
#include<stdio.h>
int main(void)
{
	int i , j , k; 
	for(i =0 ; i <10 ; i++)
	{
		if(i<=4)
		{
			for(k = 4 ; k >i ; k--)
			{
				printf(" ");
			}
			for(j = 0 ; j <=i ; j++)
			{
				printf("*");
			}
		}
		
		else
		{
			for(k = 5 ; k <=i ; k++)
			{
				printf(" ");
			}
			for(j = 0; j<10-i-1 ; j++)
			{
				printf("*");
			}
		}
		
		printf("\n");
	}
	return 0 ; 
}
		
			
			
			
			
			
	