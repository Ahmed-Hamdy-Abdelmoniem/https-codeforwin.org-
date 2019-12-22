/*C program to find sum of natural numbers from 1 to n*/
#include<stdio.h>
int main(void)
{
	int i , num,sum = 0 ; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i=1 ; i<=num;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
	return 0 ;
}
		
		