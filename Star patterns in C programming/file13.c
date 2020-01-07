/*C program to print reversed mirrored right triangle star pattern*/
#include<stdio.h>
int main(void)
{
	int i , j , k; 
	for(i=0 ;i<5;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k = 4; k>=i;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0 ; 
}
		