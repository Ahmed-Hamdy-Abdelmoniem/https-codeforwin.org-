/*Triangle number pattern using 0, 1 in C – 3*/
#include<stdio.h>
int main(void)
{
	int i , j,k=0 ; 
	for(i = 0 ; i <5; i++)
	{
		for(j= 0 ; j <=i; j++)
		{	
			if(k%2 == 0 )
			{
				printf("%d",1);
			}
			else
			{
				
			printf("%d",0);
			}
			k++ ;
		}
		printf("\n");
	}
	return 0 ; 
}
			
		
