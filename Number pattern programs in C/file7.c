/*C program to print box number pattern with plus in center*/
#include<stdio.h>
int main(void)
{
	int num ,i,j ; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 0 ; i<5 ; i++)
	{
		for(j=0;j<num;j++)
		{
			if(i==(num/2))
			{
				printf("0");
			}
			else if(j==(num/2))
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
	return 0 ; 
}
				
				
	