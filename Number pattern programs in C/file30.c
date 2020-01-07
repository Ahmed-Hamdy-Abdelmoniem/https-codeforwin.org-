/*Number pattern 29 in C*/
#include<stdio.h>
int main(void)
{
	int i,j ; 
	for(i = 0 ;i < 5; i++)
	{
		for(j=5-i ; j<=5 ; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0 ; 	
}
		
			