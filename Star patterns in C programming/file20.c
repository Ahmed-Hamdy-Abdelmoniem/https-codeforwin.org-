/*C program to print half diamond star pattern*/
#include<stdio.h>
int main(void)
{
	int i ,j ;
	for(i = 0 ;i <10 ; i++)
	{
		if(i<=4)
			{
				for(j= 0 ; j<=i ; j++)
				{
					printf("*");
				}
			}
			
		else
			{
				for(j=0 ; j<(9-i) ; j++)
				{
					printf("*");
				}
			}
			printf("\n");
			
			
	}
	return 0 ; 
}
				
			
		
			
			
		