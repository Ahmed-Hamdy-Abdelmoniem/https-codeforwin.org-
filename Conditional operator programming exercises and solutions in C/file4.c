/*4. Write a C program to check whether year is leap year or not using conditional operator.
*/
#include<stdio.h>
int main(void)
{
	int year ; 
	printf("please enter your year");
	scanf("%d",&year);
	((year%4==0) && (year%100!=1))? printf("thi year is leap"):printf("thi year is not leap");
	return 0 ; 
}
	
	