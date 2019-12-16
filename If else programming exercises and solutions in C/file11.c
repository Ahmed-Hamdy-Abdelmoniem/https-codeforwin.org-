/*C program to enter week number and print day of week*/
#include <stdio.h>
int main(void)
{
	int x ; 
	printf("pleae enter your number\n");
	scanf("%d",&x);
	if(x == 1 )
	{
		printf("monday");
	}
	else if(x == 2 )
	{
		printf("tuesday");
	
	}
	else if(x == 3)
	{
		printf("wensday");
	
	}
	else if(x == 4 )
	{
		printf("thursday");
	
	}
	else if(x == 5 )
	{
		printf("friday");
	
	}
	else if(x == 6 )
	{
		printf("saterday");
	
	}
	else if(x == 7 )
	{
		printf("sunday");
	
	}
	else
	{
		printf("not a week number");
	}
	return 0 ; 
}
