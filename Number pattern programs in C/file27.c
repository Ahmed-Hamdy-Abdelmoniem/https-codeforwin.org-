/*Number pattern 26 in C*/
#include<stdio.h>
int main(void)
{
	int i ,j; 
	for(i= 0 ;i <5 ; i++)
	{
		for(j = 5 ; j >i;j--)
		{
			printf("%d",j-i);
		}
		printf("\n");
	}
	return 0 ;
}	
		
		