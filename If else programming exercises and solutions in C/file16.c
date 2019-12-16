/*C program to check whether triangle is equilateral, scalene or isosceles*/
#include <stdio.h>
int main (void)
{
	int x, y ,z ; 
	printf("please enter your sides\n");
	scanf("%d %d %d",&x ,&y,&z);
	if( x == y && x == z && z == y )
	{
		printf("equilateral");
	}
	else if( x == y || y == z || z == x)
	{
		printf("scalene");
	}
	else if (x+ y > z && x +z > y && y+z > x )
	{
		printf("isosceles");
	}
	else{
		printf("not  atriangle");
	}
	return 0 ; 
}

		
