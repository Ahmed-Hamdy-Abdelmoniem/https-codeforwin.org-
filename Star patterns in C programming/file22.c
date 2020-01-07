/*C program to print diamond star pattern*/
#include<stdio.h>
int main(void)
{
	int i , j , k ; 
	for(i= 0 ; i < 10 ; i++)
	{
		if(i<=4)
		{
			for(k = 4 ; k>i;k--)
			{
				printf(" ");
			}
			for(j = 0 ; j<((2*i)+1);j++)
			{
				printf("*");
			}
		}
		else
		{
			for(k = 0 ; k<i-4;k++)
			{
				printf(" ");
			}
			for(j = 7 ; j>((2*i)+1)-11;j--)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0 ; 
}
			
			
				