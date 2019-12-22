/*C program to find perfect numbers between 1 to n*/
#include<stdio.h>
int main(void)
{
	unsigned int num , i ,sum = 0,j; 
	printf("please enter your number");
	scanf("%d",&num);
	for(j = 1 ; j<num;j++)
	{
		sum = 0;
	
	for(i = 1 ;i<j;i++)
	{
		if((j % i) ==0 )
		{
			sum += i ;
		}
	}
	if(j == sum)
	{
		printf("%d it is  adivisor\n",j);
	}
	}
	return 0 ; 
}

	
