/*Number pattern 22 in C*/
#include<stdio.h>
int main (void)
{
	int i , j ; 
	for(i = 0 ;i <5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",5-i);
		}
		printf("\n");
	}
	return 0; 
}
		