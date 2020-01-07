/*Triangle number pattern using 0, 1 in C – 2*/
#include<Stdio.h>
int main(void)
{
	int i,j ; 
	for(i = 0 ;i < 5; i++)
	{
		for(j = 0; j <=i; j++)
		{
			if(i%2 == 0)
			{
				printf("%d",1);
			}
			else
			{
				printf("%d",0);
			}
		}
		printf("\n");
	}
	return 0 ; 
}
				
		