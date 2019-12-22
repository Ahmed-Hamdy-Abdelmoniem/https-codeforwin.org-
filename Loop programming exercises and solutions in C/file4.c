/*C program to print all even numbers from 1 to n*/
#include<stdio.h>
int main(void)
{
	int num,i ; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 2 ; i<=num;i++)
	{
		if((i%2==0))
		{
			printf("%d ",i);
		}
	}
	return 0 ; 
}
