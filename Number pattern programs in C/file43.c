/*Number pattern 37 in C*/
#include<stdio.h>
int main(void)
{
	int i , j; 
	for(i = 0;i <5;i++)
	{
		for(j = 0 ; j <=i ; j++)
		{
			printf("%d",j+1);
		}
		for(j = i ; j >=1 ; j--)
		{
			printf("%d",j);
		}
		printf("\n");
		
		
		
			
	}
	return 0 ; 
}
			