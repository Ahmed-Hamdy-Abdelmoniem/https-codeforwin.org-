/*Number pattern 50 in C*/
#include<stdio.h>
int main(void)
{
	int i , j , k ; 
	for( i = 0 ; i <5 ;  i++)
	{
		for(j= 0;j<=2*i ;j++)
		{
			printf("%d",j+1);
		}
		printf("\n");
	}
	for( i = 0 ; i <4;  i++)
	{
		k = 0 ;
		for(j=7;j>2*i;j--)
		{
			printf("%d",k+1);
			k++;
		}
		printf("\n");
	}
	return 0 ; 
}