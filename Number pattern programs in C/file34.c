/*C program to print odd number pattern*/
#include<stdio.h>
int main(void)
{
	int i,j; 
	for(i = 1;i<10;i+=2)
	{
		for(j =i ;j<=10;j++)
		{
			
			if(j%2==1)
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
	return 0 ; 
}
		
			
			
		