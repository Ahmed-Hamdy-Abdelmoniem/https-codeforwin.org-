/*Number pattern 47 in C*/
#include<stdio.h>
int main(void)
{
	int i , j ,k ; 
	for( i = 0 ;i < 5 ; i++)
	{
		k = i;
		for( j = 5 ; j >i ; j--)
		{
			printf("%d",k+1);
			k++ ; 
		}
		printf("\n");
		
	}
	return 0 ; 
}
		