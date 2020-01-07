/*Number pattern 14 in C*/
#include<Stdio.h>
int main(void)
{
	int i,j,r,c;
	printf("please enter your number");
	scanf("%d %d",&r, &c);
	for(i = 0 ; i < r ; i++)
	{
		for(j=i;j<c+i;j++)
		{
			if(j>=r)
			{
				printf("%d",r);
			}
			else{
				printf("%d",j+1);
			}
		}
		printf("\n");
	}
return 0 ; 
}	
		