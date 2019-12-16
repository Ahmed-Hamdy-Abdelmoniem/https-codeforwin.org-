/*5. Write a C program to enter length and breadth of a rectangle and find its area.*/
#include<stdio.h>
int main(void)
{
	int length , width , Area ; 
	printf("please enter your length\n");
	scanf("%d",&length);
	printf("please enter your width\n");
	scanf("%d",&width);
	Area = (length * width);
	printf("the area is %d",Area);
	return 0 ; 
}
	