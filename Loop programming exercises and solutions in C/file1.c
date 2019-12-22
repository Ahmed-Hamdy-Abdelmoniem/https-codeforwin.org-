/*C program to print all natural numbers from 1 to n*/
#include<stdio.h>
int main(void)
{
	int num,i ;
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 1 ; i <=num ; i++)
	{
		printf("%d\n",i);
	}
	return 0 ; 
}