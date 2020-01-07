/*C program to print reverse Pyramid star pattern*/
#include<stdio.h>
int main(void)
{
	int i,j,k ; 
	for(i = 0 ; i < 5 ; i++)
	{
		for(j = 1 ; j <=i;j++)
		{
			printf(" " ); 
		}
		for(k = 9 ; k >=(2*i)+1;k--)
		{
			
			printf("*"); 
		}
		printf("\n");
	}
	return 0 ; 
}