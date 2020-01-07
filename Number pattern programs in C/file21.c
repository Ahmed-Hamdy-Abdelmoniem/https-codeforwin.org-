/*Number pattern 20 in C*/
#include<stdio.h>
int main(void)
{
	int i,j ; 
	for(i = 5;i >0; i--)
	{
		for(j= i ; j>0 ; j--)
		{
            printf("%d",i);
		}
		 printf("\n");
	}
	return 0 ; 
}
	