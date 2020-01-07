/*C program to print plus star pattern*/
#include<stdio.h>
int main(void)
{
	int i , k,j; 
	for( i = 0 ;i<9 ; i++)
	{
		if(i!=((9/2)))
		{
			for( k =0 ; k<4;k++)
			{
				printf(" " );
			}
			printf("+");
		}
		else
		{
			for( j =0 ; j<9;j++)
			{
				printf("+");
			}
		}
		printf("\n");
	}
	return 0 ;
}	
	
				
			
			
			
			
		