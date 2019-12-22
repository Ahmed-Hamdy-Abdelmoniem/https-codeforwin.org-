/*C program to print fibonacci series upto n terms*/
#include<stdio.h>
int main(void)
{
	int num,i = 0 ,x , y ,c; 
	x = 0 ; 
	y = 1 ; 
	c = 0 ; 
	for(i  = 0 ;i <10 ;i++)
	{
		printf("%d ", c	);
		x = y;
		y = c; 
		c = x + y  ;
}		
		
	return 0 ; 
}
	