/*Number pattern 9 in C*/
#include<stdio.h>
int main (void)
{
	int num,i,j ; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i= 0 ; i< num ; i++)
	{
		for(j= 0 ; j< num ; j++)
		{
			printf("%d",(i+1));
		}
		printf("\n");
	}
	return 0 ; 
}
			
			
			
			
	
	

		
	
	