/*17. Write a C program to enter P, T, R and calculate Simple Interest.
*/
#include<stdio.h>
int main(void)
{
	
		int principle, time ;
        float rate ;		
		printf("Enter principle:\n");
		scanf("%d",&principle);
		printf("Enter time:\n");
		scanf("%d",&time);
		printf("Enter rate:\n");
		scanf("%f",&rate);
		printf("Simple Interest = %f",((principle*time*rate)/100.0));
		return 0; 
}
		
		
