/*C program to check positive negative or zero using switch case*/
#include <stdio.h>
int main(void)
{
	int num , x  ; 
	 printf("please enter your number\n");
	 scanf("%d",&num);
	 x = num >= 0 ; 
	 switch(x)
	 {
		 case 1 : 
		 x = num ;
		 switch(x)
		 {
			 case 0 : 
			 printf("zero");
			 break ; 
			 default :
			 printf("+ve");
			 break ; 
		 }
		 break ; 
		 default : 
		 printf("-ve");
		 break ; 
	 }
	 return 0 ; 
}

		 
			 
     	 
	 