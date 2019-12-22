/*C program to find sum of odd numbers from 1 to n*/
#include<stdio.h>
int main(void)
{
	int num , i,sum = 0  ; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 1 ; i <=num;i++)
	{
		if(i%2==1)
		{
			sum += i ; 
		}
	}
	printf("%d",sum);
	return 0 ; 
}
