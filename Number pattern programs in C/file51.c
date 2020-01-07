/*Number pattern 44 in C*/
#include<stdio.h>
int main(void)
{
	int i , j , k = 1,l,z=0; 
	for(i = 0 ; i <5 ;i++)
	{
		
		if(i%2==0)
		{
		 for(j = 0;j<=i;j++)
		 {
			printf("%d",k);
			k++ ;
		 }			
			
		}
		else
		{
			l =  k-1  ;
			for(j = 0;j<=i;j++)
		 {
			l++;
			z++;
		 }
		 k = l+1 ;
		for(j =l;j>l-z;j--)
		 {
			printf("%d",j);
		 }		
		}
		z =0 ;
			
		printf("\n",j);
	}
	return 0 ; 
}
			