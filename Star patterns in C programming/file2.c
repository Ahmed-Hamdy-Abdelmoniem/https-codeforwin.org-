/*C program to print hollow square or rectangle star pattern*/
#include<stdio.h>
int main(void)
{
	int i , j , len ,wid; 
	printf("please enter your len");
	scanf("%d",&len);
	printf("please enter your wid");
	scanf("%d",&wid);
	for(i = 0 ; i < len ; i ++)
	{
		for(j = 0 ; j<wid ; j++)
		{
			if(j == 0 || j == wid-1 || i ==0 || i == len-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0 ; 
}
				