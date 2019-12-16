/*12. Write a C program to enter any number and calculate its square root.*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int num ,sqq ; 
	printf("pease enter your number:\n");
	scanf("%d",&num);
	sqq = sqrt(num);
	printf("root square is %d",sqq);
	return 0 ; 
}
	