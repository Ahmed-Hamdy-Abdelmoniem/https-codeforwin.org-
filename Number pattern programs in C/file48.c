/*Number pattern 40 in C*/
#include<stdio.h>
int main(void)
{
	int i ,j,k; 
	for(i = 0 ; i < 5 ;i++)
	{
		for(j = 0 ; j <=i ; j++)
		{
			printf("%d",j+1);
		}
		for(k = 0 ; k<10-2*j;k++)
		{
			printf(" ");
		}
		for(k=j;k>0;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	return 0 ; 
}
		
			
			
			