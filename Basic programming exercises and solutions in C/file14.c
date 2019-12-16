/*14. Write a C program to enter base and height of a triangle and find its area.*/
#include<stdio.h>
#define area_con 0.5
int main(void)
{
	int height , base ; 
	printf("please enter your height",&height);
	scanf("%d",&height);
	printf("please enter your base",&height);
	scanf("%d",&base);
	printf("the area is %.f",(area_con*height*base));
	return 0 ; 
}

	
	