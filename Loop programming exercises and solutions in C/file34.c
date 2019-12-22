/*C program to check whether a number is Strong number or not*/
#include <stdio.h>
int main(void)
{
	int num , i  ,digit , fac = 1,sum = 0  ,num_c; 
	scanf("%d",&num );
	num_c = num ; 
	while(num !=0)
	{
		 fac = 1;
		digit = num %10 ; // 4
		for(i = 2 ; i<=digit; i++)
		{
			fac *= i ;
		}
		sum += fac ; 
		num = num /10 ;
	}
	if( sum == num_c )
	{
		printf("strong number");
	}
	else
	{
		printf("not");
	}
	return 0 ; 
}

		
		