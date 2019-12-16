/*C program to calculate electricity bill*/
#include<stdio.h>
int main(void)
{
	int num,con = 0  ; 
	printf("please enter your consummtion");
	scanf("%d",&num);
	if(num>0)
	{
		if(num >= 50)
		{
			con += 50 * 0.5;
			num = num -50 ;
		}
		else
		{
			con += num * 0.50 ; 
			num = num -50 ; 
		}
		
	}
	if(num>0)
	{
		if(num >= 100)
		{
			con += 100 * 0.75;
			num = num -100 ;
		}
		else
		{
			con += num * 0.75 ; 
			num = num -100 ; 
		}
		
		
	}
	if(num>0)
	{
		if(num >= 100)
		{
			con += 100 * 1.20;
			num = num -100 ;
		}
		else
		{
			con += num * 1.20; 
			num = num -100 ; 
		}
		
		
	}
	if(num>0)
	{
		if(num >= 200)
		{
			con += num * 0.75 ; 
			num = num -100 ; 
		}
	}
	printf(" the bill is %d" ,con);
	return 0 ; 
}
