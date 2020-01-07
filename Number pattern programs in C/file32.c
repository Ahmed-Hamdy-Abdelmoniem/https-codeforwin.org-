/*Number pattern 31 in C*/
#include<stdio.h>
int main(void)
{
	int i , j,k;
	for(i=0 ; i<5 ; i++)
	{
		for(j=0; j<=i;j++)
		{
			
			printf("%d",j+1+i);
		}
		printf("\n");
	}
	return 0 ; 
}
			