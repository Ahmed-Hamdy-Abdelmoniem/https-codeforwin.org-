/*4. Write a C program to enter length and breadth of a rectangle and find its perimeter.*/
#include<stdio.h>
int main(void)
{
	int width ,length,Perimeter ;
	printf("please enter your width\n");
	scanf("%d",&width);
	printf("please enter your length\n");
	scanf("%d",&length);
	Perimeter = (width + length)*2 ; 
	printf("the Perimeter is %d",Perimeter);
	return 0 ; 
}
	


	