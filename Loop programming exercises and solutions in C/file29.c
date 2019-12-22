/*C program to find prime factors of a number*/
#include <stdio.h>
int main(void)
{
	int num , i, j ,k,l; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 2 ; i<num ; i++)
	{
		for( j = 2 ; j<=i ; j++)
		{
			if(i%j==0)
			{
				break ; 
			}
		}
		if(j == i)
		{
		if(num %j==0)
		{	
		k = num / j ;
		for( j = 2 ; j<=k ; j++)
		{
			if(k%j==0)
			{
				break ; 
			}
		}
		
		if(j == k)
		{
			printf("%d %d"	 , k,i);
		}
		break ;
		}
		}  
		
	}
return 0 ;	
}