/*C program to print 8 star pattern*/
#include<stdio.h>
int main(void)
{
	int i,j,k ; 
	for( i = 0 ;i <9;i++)
	{
		for(j=0 ; j<5;j++)
		{
			if(((i==0 || i == 4 || i ==8) && ((j!=0)&&(j!=4))))
			{
				printf("*");
			}
			
			else if(((i!=0 && i != 4 && i !=8) && ((j==0)||(j==4))))
			{
				printf("*");
			}
							
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0 ;
}	
	
				
				
			
		