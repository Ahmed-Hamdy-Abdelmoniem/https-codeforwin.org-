/*Triangle number pattern using 0, 1 in C – 1*/
#include<stdio.h>
int main(void)
{
	int i,j ; 
	for(i = 1 ; i <=5 ;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%d",0);
			}
			else
			{
				printf("%d",1);
			}
				
		}
		printf("\n");
	}
	return 0 ; 
}
				
			