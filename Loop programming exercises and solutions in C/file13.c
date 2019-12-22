/*C program to swap first and last digit of a number*/
#include<stdio.h>
int x =50 ; 
int main(void)
{
	int num,num_2 , last ,first,i= 1; 
	printf("please enter your number");
	scanf("%d",&num);
	num_2 = num;
	last  = num %10 ; 
	num = num /10 ; 
	//printf("%d",last);
	while(num != 0 )
	{
		first = num%10 ; 
		num = num / 10 ; 
		i = 10 * i ;
	}
	last = last *i;
	num_2 = num_2%i;
	num_2 = num_2/10;
	num_2 = num_2* 10 ;
	num_2 = num_2 + first + last;	
    printf("%d\n",num_2);
    return 0 ; 
}
	
	
	
	
		
    
	
	