/*Number pattern 16 in C*/
#include<Stdio.h>
int main(void)
{
	int r , c,i,j ; 
	printf("please enter rows and coloums");
	scanf("%d %d",&r,&c);
	for(i = 0; i <r; i++)
	{
		for(j = 0 ;j <c; j++)
		{
			if(j<i)
			{
				printf("%d",(r-j));
			}
			else
			{
			printf("%d",(r-i));
			}
			
		}
		
		printf("\n");
	
	
	}
	return 0 ; 
}	