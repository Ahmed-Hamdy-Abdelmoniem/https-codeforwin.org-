/*Number pattern 17 in C*/
#include<stdio.h>
int main(void)
{
	int i , j , k,d=5,c = 1; 
	for(i = 0 ;i<9 ; i++)
	{
        if(i<5)
		{
			
		d = 5 ;
		for(j= 0 ;j <i;j++)
		{
			printf("%d",d);
			d--; 
		}
		for(k=0;k<9-(2*i);k++)
		{
			printf("%d",d); 
		}
		d++;
		for(j= 0 ;j<i;j++)
		{
			printf("%d",d);
			d++; 
		}
		}
		
		else
		{
			
			d = 5 ;
		for(j=i-5;j<3;j++)
		{
			printf("%d",d);
			d--; 
		}
		for(k=0;k<(2*c)+1;k++)
		{
			printf("%d",d); 
		}
		d++;
		for(j= i-5 ;j<3;j++)
		{
			printf("%d",d);
			d++; 
		}
		c++;
		}
	
			
		printf("\n"); 
		
	}
	return 0 ; 
}
            			