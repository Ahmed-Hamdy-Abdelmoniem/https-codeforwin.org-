/*Number pattern 18 in C*/
#include<stdio.h>
int main(void)
{
	int i,j,k,l; 
	for(i =0;i<5;i++)
	{
		l = 2 ;
		for(k = i;k>=0;k--)
		{
					printf("%d",k+1);
		}
		
		
		for(j =i+1 ; j<5 ; j++)
		{
				printf("%d",l);	
				l++;				
		}
		printf("\n");
	}
	return 0 ; 
}