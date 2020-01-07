/*Number pattern 34 in C*/
#include<Stdio.h>
int main(void)
{
	 int i,j; 
	 for(i = 1;i <=5 ; i++)
	 {
		 
		 for(j =1 ;j<2*i ; j++)
		 {
			 printf("%d",j);
		 }
		  printf("\n");
	 }
	 return 0 ; 
}