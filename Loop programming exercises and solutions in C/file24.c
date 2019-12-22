/*C program to find HCF (GCD) of two numbers*/
#include<stdio.h>
int main(void)
{
	int first ,second ,i; 
	printf(" enter first & second");
	scanf("%d %d",&first,&second);
	for(i = 30 ; i>=2 ;i--)
	{
		if((first % i)==0 && (second % i)==0)
		{
			break ; 
		}
	}
	printf("hcf is %d",i);
	return 0 ; 
}
 		
	