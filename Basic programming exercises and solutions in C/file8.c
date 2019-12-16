/*8. Write a C program to enter temperature in Celsius and convert it into Fahrenheit.*/
#include<stdio.h>
#define temp_const (9.0/5.0)
int main (void)
{
	int Celsius ; 
	printf("Enter temperature in Celsius = \n");
	scanf("%d",&Celsius);
	printf("Temperature in Fahrenheit = %.f",((Celsius*temp_const)+32));
	return 0 ; 
}
	
