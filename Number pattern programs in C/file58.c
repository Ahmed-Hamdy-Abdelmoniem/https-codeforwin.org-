/*Half diamond number pattern with star border program in C – 1*/
#include<stdio.h>
int main(void)
{
	int i , j , k; 
	for(i = 0 ; i <6 ;i++)
	{
		k = i ;
		for(j=0 ; j<2*i+1;j++)
		{
			if(j==0 || j ==2*i)
			{
				printf("*");
			}
				
				
			else if(j>i)
			{
				printf("%d",k-1);
				k--;
			}
			else
			{
				printf("%d",j);
			}
		}
		
		
		printf("\n");
	}
	for(i = 0 ; i <5 ;i++)
	{
		k=0;
		for(j=0;j<9-2*i;j++)
		{
			if(j==0 || j ==(8-(2*i)))
			{
				printf("*");
			}
				
			else if(j>=5-i)
			{
				k--;
				printf("%d",k);
				
			}
			else
			{
				printf("%d",j);
				k++;
			}
			
		}
		
		printf("\n");
	}
	return 0 ; 
}
	
				