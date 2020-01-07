/*Number pattern 32 in C*/
#include<stdio.h>
int main(void)
{
	int i , j ; 
	for( i = 0 ;i < 5 ; i++)
	{
		for(j= 0 ; j <5-i ; j++)
			
			{
				printf("%d",j-i+5);
			}
			printf("\n");
	}
	return 0 ; 
}
			