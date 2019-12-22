/*C program to find sum of even numbers between 1 to n*/
#include<stdio.h>
int main(void)
{
	int num , i ,sum = 0 ; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 2 ;i<=num ; i++)
	{
		if(i%2==0)
		{
			sum +=  i ; 
		}
	}
	printf("%d",sum);
	return 0 ; 
}
	