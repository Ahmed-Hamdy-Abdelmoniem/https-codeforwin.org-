/*14. Write a C program to convert decimal to binary number system using bitwise operator.
*/
#include<stdio.h>
int main(void)
{
	int num,i,result ; 
	printf("please enter your number\n");
	scanf("%d",&num);
	for(i = 0 ; i <32;i++)
	{
		result = (num<<i)&(1<<31);
		if(result == -2147483648)
		{
		     printf("%d",1);
		}
		else
		{
			 printf("%d",0);
		}
			
	}
	return 0 ; 
}
	
	
	
	
