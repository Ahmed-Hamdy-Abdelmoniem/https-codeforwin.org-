/*Number pattern 36 in C*/
#include<stdio.h>
int main(void)
{
	int i,j, k = 0,m =1 ; 
	for(i = 0 ; i <5 ; i++)
	{
			
			
		for(j = 0 ; j <m;j++)
		{
			k++ ; 
			if(k>9)
			{
				k = 1 ; 
			}
			
			printf("%d",k);
		}
		
		m*=2;
		printf("\n");
	}
	return 0 ; 
}
				
			
		