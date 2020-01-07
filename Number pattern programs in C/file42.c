/*Even number pattern 2 in C*/
#include<Stdio.h>
int main(void)
{
	int i ,j; 
	for(i=0 ; i <5;i++)
	{
		for(j=0;j<=(2*i);j+=2)
		{
			printf("%d",j+2);
		}
		for(j=(2*i)+2;j>2;j-=2)
		{
			printf("%d",j-2);
		}
		printf("\n");
	}
}
			