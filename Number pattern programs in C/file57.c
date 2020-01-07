/*Half diamond number pattern program in C – 3*/
#include<stdio.h>
int main(void)
{
	int i , j , k; 
	for(i = 0 ; i <5 ;i++)
	{
		k = i ;
		for(j=0 ; j<2*i+1;j++)
		{
			if(j>i)
			{
				printf("%d",k);
				k--;
			}
			else
			{
				printf("%d",j+1);
			}
		}
		
		
		printf("\n");
	}
	for(i = 0 ; i <4 ;i++)
	{
		k=0;
		for(j=0;j<7-2*i;j++)
		{
			if(j>=4-i)
			{
				k--;
				printf("%d",k);
				
			}
			else
			{
				printf("%d",j+1);
				k++;
			}
			
		}
		printf("\n");
		
		
	}
	return 0 ; 
}
	
				