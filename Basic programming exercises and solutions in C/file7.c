/*7. Write a C program to enter length in centimeter and convert it into meter and kilometer.*/
#include<stdio.h>
#define meter 100.0
#define kilo 100000.0
int main(void)
{
	int centimeter  ; 
	printf("Enter length in centimeter\n");
	scanf("%d",&centimeter);
	printf("Length in meter = %f m \n",centimeter/meter);
	printf("Length in kilometer  = %f km \n",centimeter/kilo);
	return 0 ; 
}

	
	