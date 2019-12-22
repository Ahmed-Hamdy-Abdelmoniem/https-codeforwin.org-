/*C program to print strong numbers between 1 to n*/
#include <stdio.h>
int main(void)
{
	int num , i  ,digit , fac = 1,sum = 0  ,num_c,j,k; 
	printf("plaese enter your number");
	scanf("%d",&j);
	for(k =2  ; k <=j ;k++)
	{
		num = k ;
		sum = 0 ;
		
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
		printf("%d strong number\n",num_c);
	}
	}
	return 0 ; 
}

		
		