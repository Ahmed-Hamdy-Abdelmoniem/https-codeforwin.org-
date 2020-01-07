/*C program to print hollow inverted right triangle star pattern*/
#include<stdio.h>
int main(void)
{
	int i ,j; 
	for(i = 0 ;i <5 ; i++)
	{
		for(j = 0 ;j <5-i ; j++)
		{
			if(i==0 || j == 0 ||(j == (5-i-1)))
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

		
				