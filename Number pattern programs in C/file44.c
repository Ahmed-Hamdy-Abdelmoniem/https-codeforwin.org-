/*Number pattern 38 in C*/

#include<stdio.h>
int main(void)
{
	int i,j,k ; 
	for(i = 0 ; i <5 ; i++)
	{
		if(i==0)
		{
			printf("1");
		}
		else if( i == 1)
		{
			printf("3");
			printf("2");
		}
		else
		{
			for(j=i; j<2*i;j++)
			{
				printf("%d",j+2);
			}
			for(j=2*i; j>i;j--)
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
	return 0 ; 
}
			