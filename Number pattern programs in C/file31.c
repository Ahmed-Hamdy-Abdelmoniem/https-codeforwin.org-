/*Number pattern 30 in C*/
#include<stdio.h>
int main(void)
{
	int i ,j; 
	for(i = 0 ;i <5 ; i++)
	{
		for(j = i ;j <5 ; j++)
		{
			printf("%d",j+1);
		}
		printf("\n");
	}
	return 0 ; 
}
		
			