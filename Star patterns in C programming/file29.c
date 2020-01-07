/*C program to print heart star pattern*/
#include<stdio.h>
int main(void)
{//18
//13
	int i , j,k; 
	for(i=0 ; i <13 ; i++)
	{
		if(i<=2)
		{
			
		for(k=2;k>i;k--)
		{
			printf(" ");
		}
		for(j=0;j<((2*i)+5);j++)
		{
			printf("*");
		}
		for(k=0;k<=5-(2*i);k++)
		{
			printf(" ");
		}
		for(j=0;j<((2*i)+5);j++)
		{
			printf("*");
		}
		
		
		}
		else
		{
			for(k=3;k<i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=24-(2*i);j++)
		{
			printf("*");
		}
		}
			
		printf("\n");
	}
	return 0 ; 
}
			