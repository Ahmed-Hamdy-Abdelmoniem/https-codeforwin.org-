/*C program to find maximum between two numbers using switch case*/
#include<stdio.h>
int main(void)
{
	int num1 , num2 ,x  ; 
	printf("please enter your numbers");
	scanf("%d %d",&num1 ,&num2);
	x = num1 > num2 ;
	switch(x)
	{
		case 1 :
		printf("%d is bigger\n",num1);
		break ; 
		default:
		printf("%d is bigger\n",num2);
		break ; 
	}
	return 0 ; 
}

		
		