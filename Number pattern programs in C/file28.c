/*Number pattern 27 in C*/
#include<stdio.h>
int main(void)
{
	int i,j ; 
	for(i = 0 ; i <5 ;i++)
	{
		for(j = 0 ;j<=i;j++)
		{
			printf("%d",5-j);
		}
		printf("\n");
	}
	return 0 ; 
}
		
