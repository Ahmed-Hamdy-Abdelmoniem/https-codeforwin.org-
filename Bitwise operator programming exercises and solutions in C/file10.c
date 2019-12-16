/*10. Write a C program to count leading zeros in a binary number.
*/
#include<stdio.h>
int main(void)
{
	int num , i  , j= 0; 
	printf("please enter your numbern\n");
	scanf("%d",&num);
	for(i = 0 ; i <=31;i++)
	{
		if((num<<i)&((1<<31)))
		{
			break;
		}
		else
		{
			j++; 
			
		}
	}
	printf("the number is %d",j);
	return 0 ; 
	
}

			
		