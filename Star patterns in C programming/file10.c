/*C program to print mirrored right triangle star pattern*/
#include<stdio.h>
int main(void)
{
	int i , j , k; 
	for(i = 0 ;i <5;i++)
	{
		for(j = 4 ; j >i-0 ; j--)
		{
            printf(" ");
		}
		for( k = 0 ; k <=i ; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0 ; 
}
		