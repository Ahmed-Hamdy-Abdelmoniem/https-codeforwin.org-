/*C program to print mirrored rhombus, parallelogram star pattern*/
#include<stdio.h>
int main(void)
{
	int i , j ,l =0,k,r,c; 
	printf("please enter numner of rows");
	scanf("%d",&r);
	printf("please enter numner of coloums");
	scanf("%d",&c);
	for(i = 0  ; i <=r ;i++)
	{
		if((i%2)== 1 )
		{
			printf("\n");
		}
		else
		{
			for(j = 0 ; j <l; j++) 
			{
				printf(" ") ; 
			}
			for(k = 0 ; k < c ; k++)
			{
				printf("*") ;
			}
                l++ ; 
		}
	}
return 0 ; 
}	
				
			
				
