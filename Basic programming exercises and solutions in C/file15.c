/*15. Write a C program to calculate area of an equilateral triangle.*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	int side ; 
	printf("Enter side of the equilateral triangle");
	scanf("%d",&side);
	printf("Area of equilateral triangle = %f\n",(sqrt(3)/4)*(side*side));
	return 0 ; 
}

	

