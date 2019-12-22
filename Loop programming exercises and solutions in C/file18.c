/*C program to count frequency of digits in an integer*/
#include<stdio.h>
int main(void)
{
	int num ,x0 = 0,x1 = 0,x2 = 0,x3 = 0,x4 = 0,x5 = 0,x6 = 0,x7 = 0,x8 = 0,x9 = 0,digit; 
	printf("please enter your number");
	scanf("%d",&num);
	while(num != 0 )
	{
		digit = num %10 ;
		if(digit == 0)
		{
			x0 ++ ; 
		}
		else if(digit == 1)
		{
			x1++;
		}
		else if(digit == 2)
		{
			x2++;
		}
		else if(digit == 3)
		{
			x3++;
		}
		else if(digit == 4)
		{
			x4++;
		}
		else if(digit == 5)
		{
			x5++;
		}
		else if(digit == 6)
		{
			x6++;
		}
		else if(digit == 7)
		{
			x7++;
		}
		else if(digit == 8)
		{
			x8++;
		}
		else if(digit == 9)
		{
			x9++;
		}
		num = num /10 ; 
	}
	printf("Frequency of 0 = %d\n",x0);
	printf("Frequency of 1 = %d\n",x1);
	printf("Frequency of 2 = %d\n",x2);
	printf("Frequency of 3 = %d\n",x3);
	printf("Frequency of 4 = %d\n",x4);
	printf("Frequency of 5 = %d\n",x5);
	printf("Frequency of 6 = %d\n",x6);
	printf("Frequency of 7 = %d\n",x7);
	printf("Frequency of 8 = %d\n",x8);
	printf("Frequency of 9 = %d\n",x9);
	return 0; 
}






	
	