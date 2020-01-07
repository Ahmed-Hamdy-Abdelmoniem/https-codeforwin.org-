/*Number pattern 12 in C*/
#include<stdio.h>
int main(void)
{
	int r,c,i,j,k ;
	printf(" please enter rows & coloums");
	scanf("%d %d",&r,&c);
	for(i = 0; i<r ;i++)
	{
		for(j=1 ;j<=c ; j++)
		{
			printf("%d ",j+(5*i));
		}
		printf("\n");
	}
	return 0 ; 
}
		
			
			
			
	