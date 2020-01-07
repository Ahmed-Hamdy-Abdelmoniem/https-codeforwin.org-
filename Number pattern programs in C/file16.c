/*Number pattern 15 in C*/
#include<stdio.h>
int main(void)
{
	int i , j,k=0,a,b ;
    printf("please enter your number");
    scanf("%d %d",&a,&b);	
	for(i=0;i<a;i++)
	{
		k = i;
		for(j=i;j<(b+i);j++)
		{
			if(j>=b)
			{
				
				printf("%d",k);
				k--;
			}
			else
			{
				printf("%d",j+1);
			}
		}
		printf("\n");
	}
	return 0 ; 
}
				
				
			
			
			