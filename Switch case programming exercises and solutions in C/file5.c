/*C program to check even or odd number using switch case*/
#include <stdio.h>
int main (void)
{
	int num ,x ; 
	printf("please enter your number\n");
	scanf("%d",&num);
	x = num%2 ;
    switch(x)
	{
      case 0 :
       printf("even");
        break ; 
       default :
        printf("odd");
         break ; 
	}
return 0 ; 
}
	
         	   
	
	