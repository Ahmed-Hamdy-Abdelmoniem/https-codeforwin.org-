/*11. Write a C program to find power of any number x ^ y.*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	int base ,expo,power; 
	printf("please enter base\n");
	scanf("%d",&base);
	printf("please enter expo\n");
	scanf("%d",&expo);
	power = pow(base,expo);
	printf("%d^%d = %d ",base,expo,power);
	return 0; 
}

	