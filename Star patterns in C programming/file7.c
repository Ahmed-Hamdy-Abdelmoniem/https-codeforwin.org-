/*C program to print hollow mirrored rhombus, parallelogram star pattern*/
#include<stdio.h>
int main (void)
{
	int i , j , l= 0 ,k ,c ,r ; 
	printf("plesase enter your rows");
	scanf("%d",&r);
	printf("plesase enter your col");
	scanf("%d",&c);
	for( i = 0 ; i <r ; i++)
	{
		if((i%2)==1)
		{
			printf("\n");
		}
		else
		{
			for(j = 0 ; j < l ; j++)
			{
				printf(" ");
			}
			for(k = 0 ; k < c ; k++)
			{
				if(i == 0 || i == r-1 || k ==0 || k ==c-1)
				{
					printf("*");
				}
				else
				{
					printf(" " );
				}
			}
			l ++ ;
		}
		
	}
	return 0 ; 
}
				
			