/*C program to print hollow inverted pyramid star pattern*/
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
			if(i==0 || k ==9 || k ==(2*i)+1)
			{
			printf("*"); 
			}
			else
			{
				printf(" ");
			}				
				
		}
		printf("\n");
	}
	return 0 ; 
}
