/*C program to print natural numbers in reverse from n to 1*/
#include<stdio.h>
int main(void)
{
	int num; 
	printf("please enter  your number");
	scanf("%d",&num);
	for(;num>0;num--)
	{
		printf("%d ",num);
	}
	return 0 ; 
}

	