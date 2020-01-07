/*C program to print hollow square star pattern with diagonal*/
#include<stdio.h>
int main(void)
{
	int i , j ,r,c ;
	printf("please enter  rows\n");
	scanf("%d",&r);
	printf("please enter  coloums\n");
	scanf("%d",&c);
	for(i = 0 ; i < r ; i++)
	{
		for(j = 0 ; j < c ; j++)
		{
			if((i == 0) ||(i == r-1) || ((j!=((c-1)/2))&& i!=(r-1)/2) || ((i == (r-1)/2 && (j == 0 || j == (c-1) || j == (c-1)/2 ))))
			{
				printf("*");
			}
			else{
				printf(" " );
			}
		}
		printf("\n");
	}
	return 0 ; 
}

		
