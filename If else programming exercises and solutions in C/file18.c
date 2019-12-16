/*C program to calculate profit or loss*/
#include <stdio.h>
int main(void)
{
	int cost ,seling ;
	printf("please enter your cost and sliing\n");
	scanf("%d %d", &cost ,&seling);
	if(cost >= seling)
	{
			printf("loss is %d",(-cost + seling));
	}
	else 
	{
		printf("profit is %lu",(seling - cost));
	}
	return 0 ; 
}

		

		