/*C program to print hollow diamond star pattern*/
#include<stdio.h>
int main(void)
{
	int i ,j,k,l=0;
	for(i = 0 ;i <11 ; i++)
	{
		if(i<=4)
		{
			if(i==0)
			{
				for(j= 0 ; j<10 ; j++)
			{
				printf("*");
			}
			}
			else{
			
			for(j= 4 ; j>i-1 ; j--)
			{
				printf("*");
			}
			for(k= 0 ; k<(2*i) ; k++)
			{
				printf(" ");
			}
			for(j= 4 ; j>i-1 ; j--)
			{
				printf("*");
			}
		}
		}
		else
		{
			if(i==10)
			{
				for(j= 0 ; j<10 ; j++)
			{
				printf("*");	
			}
			}
			else{
				l+=2;
			for(j= 0 ; j<i-4 ; j++)
			{
				printf("*");
			}
			for(k=10; k>l; k--)
			{
				printf(" ");
			}
			for(j= 0; j<i-4 ; j++)
			{
				printf("*");
			}
			}
		}
		printf("\n");
	}
	return  0 ; 
}