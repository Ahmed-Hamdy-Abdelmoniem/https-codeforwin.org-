/*C program to print X number pattern*/
#include<stdio.h>
int main(void)
{
	int i,j; 
	for(i = 0; i < 5 ; i++)
	{
		for(j = 1;j<=i;j++)
		{
			printf(" ");
		}
	
		printf("%d",(i+1));
		for(j = 0;j<7-2*i;j++)
		{
			printf(" ");
		}
		if(i!=4)
		{
		printf("%d",(i+1));
		}
		printf("\n");
	}
	for(i = 0; i < 4 ; i++)
	{
		for(j = 4;j>i+1;j--)
		{
			printf(" ");
		}
	
		printf("%d",(4-i));
		for(j = 0;j<=2*i;j++)
		{	
			printf(" ");
		}
		
		printf("%d",(4-i));
		
		printf("\n");
	}	
	
	return 0 ; 
}

		
			
		