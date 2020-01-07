/*C program to print square or rectangle star pattern*/
#include<stdio.h>
int main(void)
{
	int i,j,lenght, width; 
	printf("please enter lenght");
	scanf("%d",&lenght);
	printf("please enter width");
	scanf("%d",&width);
	for(i = 0 ; i <width;i++)
	{
		for(j = 0 ; j <lenght;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0 ; 
}
		