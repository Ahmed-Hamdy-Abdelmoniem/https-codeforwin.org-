/*Number pattern 41 in C*/
#include<stdio.h>
 int main(void)
 {
	 int i,j ; 
	 for(i = 0 ; i <5 ; i++)
	 {
		 if(i%2==0)
		 {
			 for(j=0; j<=i;j++)
			 {
				 printf("%d",j+1);
			 }
		 }
		 else
		 {
			 for(j=i+1 ; j>0;j--)
			 {
				 printf("%d",j);
			 }
		 }
		  printf("\n",j);
	 }
	 return 0 ; 
 }