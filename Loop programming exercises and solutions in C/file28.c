/*C program to find sum of prime numbers between 1 to */
#include <stdio.h>
int main(void)
{
	int i , num ,j,k=0,sum=0; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 2 ; i <=num; i++)
	{
		k = 0;
		for(j = 2 ;j<=i;j++)
		{
			if((i%j)==0)
			{
				k++;
			}
		}
		if(k==1)
		{
			
			printf("%d is prime\n",i);
			sum += i;
		}
	}
	printf("%d is  sum prime\n",sum);
	
	return 0; 
}

				
		

