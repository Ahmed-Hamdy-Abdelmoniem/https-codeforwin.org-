/*Number pattern 11 in C*/
#include<Stdio.h>
int main(void)
{
	int i , num , j ; 
	printf("please enter number of rows");
	scanf("%d",&num);
	for( i=0;i<num;i++)
	{
		for(j=1;j<=num;j++)
		{
			printf("%d",(j+i));
		}
		printf("\n");
	}
	return 0 ; 
}
		