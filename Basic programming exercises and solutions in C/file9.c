/*9. Write a C program to enter temperature in Fahrenheit and convert to Celsius*/

#include<stdio.h>
#define _fehr 32
#define con (5.0/9.0)
int main(void)
{
	int fahrenheit  ; 
	printf("Temperature in fahrenheit\n");
	scanf("%d",&fahrenheit);
	printf("Temperature in celsius = %.2f",((fahrenheit-_fehr)*con));
	return 0 ; 
}