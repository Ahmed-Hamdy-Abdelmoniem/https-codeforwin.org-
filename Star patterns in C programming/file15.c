/*C program to print hollow mirrored inverted right triangle star pattern*/
#include<stdio.h>
int main(void)
{
	int i,j,k ; 
	for(i = 0 ;  i <5 ; i++)
	{
		for(j= 1 ; j <=i; j++)
		{
			printf(" ");
		}
		for(k=0 ;k<5;k++)
		{
			if(k==0  ||i == 0 || (k==5-i-1))
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
			