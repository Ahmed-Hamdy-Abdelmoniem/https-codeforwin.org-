/*C program to print box number pattern with 1 and 0*/
#include<stdio.h>
int main(void)
{
	int num,i,j ; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i=0 ; i<num ; i++)
	{
		for(j=0 ; j<num ; j++)
		{
			if(i== (num-1) || i == 0 )
			{
				printf("1");
			}
			else
			{
				if(j%2==0)
				{
					printf("1");
				}
				else
				{
					printf("0");
				}
			}
		}
		printf("\n");
	}
	return 0 ;
}	
	
		
					