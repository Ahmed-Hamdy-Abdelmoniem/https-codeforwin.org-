/*Number pattern 45 in C*/
#include<stdio.h>
int main(void)
{
	int i,j  ; 
	
	for(i = 0 ; i <5 ; i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i==0 || i == 4)
			{
				printf("%d",1);
			}
			else if(i%2==1)
			{
				printf("%d",2);
			}
			else
			{
				printf("%d",i+1);
			}
		}
		printf("\n");
	}
	return 0  ;
}
				
				