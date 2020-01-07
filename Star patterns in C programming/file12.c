/*C program to print reverse right triangle star pattern*/
#include<stdio.h>
int main(void)
{
	int i ,j; 
	for(i = 0 ; i<5 ;i++)
	{
		for(j =5 ; j>i ; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0 ;
}	
	
			