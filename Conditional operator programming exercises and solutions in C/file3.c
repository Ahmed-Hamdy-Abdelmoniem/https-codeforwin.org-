/*3. Write a C program to check whether a number is even or odd using conditional operator.
*/
#include<stdio.h>
int main(void)
{
	int num; 
	printf("please enter your number");
	scanf("%d",&num);
	num%2?printf("odd"):printf("even");
	return 0  ;
}
