/*C program to print 0 or 1 square number pattern*/
#include<stdio.h>
int main(void)
{
	int num,i,j ; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			printf("1");
		}
		printf("\n");
	}
	return 0 ; 
}
		