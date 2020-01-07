/*Number pattern 42 in C*/
#include<stdio.h>
int main(void)
{
	int i ,j,k=4,l; 
	for(i = 0 ;i <5 ; i++)
	{
		k=4;
		l = i;
		for(j=0;j<=i;j++)
		{
			
			if(j==0)
			{
				printf("%d ",l+1);
			}
			else
			{
				
				printf("%d ",l+1+k);
				l=l+k;
				k--;
				
			}	
			
		}
		printf("\n");
	}
	return 0 ; 
}