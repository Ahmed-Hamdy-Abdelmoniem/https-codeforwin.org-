/*C program to find all factors of a number*/
#include<stdio.h>
int main(void)
{
	int num , i ; 
	printf("enter");
	scanf("%d",&num);
	for( i = 1;i <=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
		}
	}
	return 0 ; 
}