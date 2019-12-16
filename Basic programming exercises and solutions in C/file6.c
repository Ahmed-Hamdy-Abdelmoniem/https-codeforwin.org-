/*6. Write a C program to enter radius of a circle and find its diameter, circumference and area.
*/
#include<stdio.h>
#define bie 3.14f
int main(void)
{
	int radius;
	printf("Enter radius\n");	
	scanf("%d",&radius);
	printf("Diameter = %d\n",(radius*2));
	printf("Circumference = %f \n",(2*bie*radius));
	printf("Area = %f	\n",(bie*radius*radius));
	return 0 ; 
}



	