/*C program to find factorial of a number*/
#include <stdio.h>
int main(void)
{
	int num ,fac = 1 ; 
	printf("please enter yur number");
	scanf("%d",&num);
	while(num != 0 )
	{
		fac *= num ; 
        num -- ; 
	}
	printf("%d",fac);
return 0 ; 
}	