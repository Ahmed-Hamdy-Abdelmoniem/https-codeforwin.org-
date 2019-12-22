/*C program to check whether a number is armstrong number or not*/
#include<stdio.h>
int main(void)
{
	int num ,i, j=0,num_c,sum = 0,m,numm,d,z=1; 
	printf("please enter your number");
	scanf("%d",&num);
	numm =num_c = num;
	while(num !=0)
	{
		printf("ahmed\n");
		num = num /10 ; 
		j ++ ; 
	}
	for(i = 0 ; i < j ; i++)
	{
			printf("a\n");
			z =1;
		d = num_c % 10 ;
		num_c /= 10;
		for(m=0 ; m<j;m++)
		{
			z *= d;
			printf("%d\n",z);
		}
		sum += z;
	}
	printf("%d\n",sum);
	if (sum == numm)
	{
		printf("armstrong");
	}
	return 0 ; 
}
