/*13. Write a C program to enter two angles of a triangle and find the third angle*/

#include<stdio.h>
#define triangle 180
int main(void)
{
	int angel1 , angel2; 
	printf("pleasse neter agel1\n");
	scanf("%d",&angel1);
	printf("pleasse neter agel2\n");
	scanf("%d",&angel2);
	printf("the thirs agl is %d\n",triangle-(angel1+angel2));
	return 0 ; 
}
