/*Number pattern 19 in C*/
#include<stdio.h>
int main(void)
{
	int i,j ; 
	for(i = 0 ; i <5 ;i++)
	{
		for(j = 0 ; j <=i ; j++)
		{
			printf("%d",i+1);
		}
		printf("\n");
	}
	return 0 ;
}	
	
		