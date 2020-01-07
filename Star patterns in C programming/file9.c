/*C program to print hollow right triangle star pattern*/
#include<stdio.h>
int main(void)
{
	int i , j;
	for(i = 0 ; i < 5 ; i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==4|| i==j)
			{
				printf("*");
				
			}
			else{
				printf(" " );
			}
		
		}
		printf("\n");
	}
}
			