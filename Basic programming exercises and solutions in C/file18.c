/*18. Write a C program to enter P, T, R and calculate Compound Interest.
*/
#include<stdio.h>
#include <math.h>
int main(void)
{
	int p , r , t;
	printf("please enter p");
	scanf("%d",&p);
	printf("please enter r");
	scanf("%d",&r);
	printf("please enter t");
	scanf("%d",&t);
	printf("Compound Interest %f",(p*pow((1+(r/100.0)),t)));
	return 0 ; 
}