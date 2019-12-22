/*C program to find LCM of two numbers*/
#include<stdio.h>
int main(void)
{
	int first ,second ,i=1; 
	printf(" enter first & second");
	scanf("%d %d",&first,&second);
	while(1)
	{
		if((i % first==0 ) && (i % second==0 ))
		{
			break ; 
		}
		i++;
	}
	printf("hcf is %d",i);
	return 0 ; 
}
 		
	