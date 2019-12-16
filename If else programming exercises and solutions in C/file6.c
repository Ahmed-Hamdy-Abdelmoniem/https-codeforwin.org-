/*C program to check Leap Year*/
#include <stdio.h>
int main(void)
{
	int year ; 
	printf("please enter your year");
	scanf("%d",&year);
	if(((year%4)==0) && (((year%100)!=0)))
	{
		printf("%d is leab",year);
	}
	else
	{
		printf("%d is not leab",year);
	}
	return 0 ; 
}
		