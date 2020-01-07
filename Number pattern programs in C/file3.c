/*C program to print number pattern with 1, 0 at alternate columns*/
#include<Stdio.h>
int main(void)
{
	int num ,i,j; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			if((j%2) == 0)
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
			
			
				
	