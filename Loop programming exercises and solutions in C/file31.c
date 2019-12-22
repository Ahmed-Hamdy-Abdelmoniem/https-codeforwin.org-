/*C program to find Armstrong numbers between 1 to n*/
#include<stdio.h>
int main(void)
{
	int num ,i, j=0,num_c,sum = 0,m,numm,d,z=1,s=1,e = 1000; 
	for(s= 1 ; s<=e;s++)
{
	j=0,sum = 0,z=1;
	numm =num_c = num = s;
	while(num !=0)
	{
		//printf("ahmed\n");
		num = num /10 ; 
		j ++ ; 
	}
	for(i = 0 ; i < j ; i++)
	{
			//printf("a\n");
			z =1;
		d = num_c % 10 ;
		num_c /= 10;
		for(m=0 ; m<j;m++)
		{
			z *= d;
			//printf("%d\n",z);
		}
		sum += z;
	}
	//printf("%d\n",sum);
	if (sum == numm)
	{
		printf("armstrong %d\n",sum);
	}
}
	return 0 ; 
}
