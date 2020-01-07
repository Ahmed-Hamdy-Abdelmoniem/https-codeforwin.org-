/*C program to print number pattern with 1, 0 at alternate rows*/
#include<stdio.h>
int main(void)
{
	int num ,i,j; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		if((i%2)==0)
		{
			for(j=0;j<num;j++)
			{
				printf("1");
			}
		}
		else
		{
			for(j=0;j<num;j++)
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0 ; 
}
			
	