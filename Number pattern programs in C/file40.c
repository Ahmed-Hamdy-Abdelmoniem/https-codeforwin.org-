/*Number pattern 35 in C*/
#include<stdio.h>
int main(void)
{
	int i ,j; 
	for(i = 0 ;i<5 ; i++)
	{
		if(i%2==0)
		{
			for(j = 0 ; j<=2*i;j+=2)
			{
				printf("%d",j+1);
			}
		}
		else 
		{
			for(j = 1 ; j<=(2*i)+2;j+=2)
			{
				printf("%d",j+1);
			}
		}
		printf("\n");
	}
	return 0 ;
}

		
			
			