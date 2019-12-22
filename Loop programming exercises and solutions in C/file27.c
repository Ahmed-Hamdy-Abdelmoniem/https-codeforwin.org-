/*C program to print all prime numbers between 1 to n*/
#include <stdio.h>
int main(void)
{
	int i , num ,j,k=0; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 1 ; i <=num; i++)
	{
		k = 0;
		for(j = 1 ;j<=i;j++)
		{
			if((i%j)==0)
			{
				k++;
			}
		}
		if(k==2 || i == 1)
		{
			
			printf("%d is prime\n",i);
		}
	}
	return 0; 
}

				
		