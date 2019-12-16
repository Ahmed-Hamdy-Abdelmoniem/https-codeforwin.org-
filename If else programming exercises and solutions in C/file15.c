/*C program to check whether triangle is valid or not if sides are given*/
#include<stdio.h>
int main(void)
{
	int x,y,z ; 
	printf("please enter your sides");
	scanf("%d %d %d" ,&x , &y , &z );
	if(x+y>z && x+z>y && z+y>x )
	{
		printf("valid");
	}
	else 
	{
		printf("not valid");
	}
	return 0 ; 
}

		