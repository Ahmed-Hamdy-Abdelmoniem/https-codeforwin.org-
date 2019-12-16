/*C program to enter basic salary and calculate gross salary of an employee*/
#include<stdio.h>
int main(void)
{
	float baisc,da, hr ; 
	printf("please enter your slalry");
	scanf("%f",&baisc);
	if(baisc<=10000)
	{
		da = baisc * 0.2 ; 
		hr = baisc * 0.8;
	}
	else if (baisc>10000 && baisc<=20000)
	{
		da = baisc * 0.25 ; 
		hr = baisc * 0.9;
	}
	else if (baisc>20000)
	{
		da = baisc * 0.3 ; 
		hr = baisc * 0.95;
	}	
	printf("Gross salary %f",hr +da +baisc);
	return 0 ; 
}

	
		