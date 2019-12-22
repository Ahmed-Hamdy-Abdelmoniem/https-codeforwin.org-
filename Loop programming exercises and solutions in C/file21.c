/*C program to find power of a number using for loop*/
#include<stdio.h>
int main(void)
{
	int base , ex ,n=1; 
	printf("pleae ebter base and number");
	scanf("%d %d",&base,&ex);
	while(ex != 0 )
	{
		n *= base ; 
		ex--;
	}
	printf("%d",n);
	return 0 ; 
}

		
	