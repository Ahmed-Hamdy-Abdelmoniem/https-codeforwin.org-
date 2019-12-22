/*C program to print all odd numbers from 1 to n*/
#include<stdio.h>
int main(void)
{
	int num,i ; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 1 ;i<=num;i++)
	{
		if((i%2) == 1)
		{
			printf("%d ",i);
		}
	}
	return 0 ; 
}

	
