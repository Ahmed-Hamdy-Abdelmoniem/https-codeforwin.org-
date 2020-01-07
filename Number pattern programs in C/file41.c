/*Number pattern 39 in C*/
#include<Stdio.h>
int main(void)
{
	int i ,j; 
	for(i=0 ; i <5;i++)
	{
		for(j=0;j<=(2*i);j+=2)
		{
			printf("%d",j+1);
		}
		for(j=(2*i);j>=1;j-=2)
		{
			printf("%d",j-1);
		}
		printf("\n");
	}
}
			