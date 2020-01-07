/*C program to print Floyd’s triangle number pattern*/
#include<stdio.h>
int main(void)
{
	int i,j,k=0 ; 
	for(i= 0; i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			k++ ;
			printf("%d ",k);
		}
		printf("\n");
	}
	return 0 ; 
}
		
		