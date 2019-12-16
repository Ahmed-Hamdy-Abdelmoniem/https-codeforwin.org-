/*9. Write a C program to count trailing zeros in a binary number.
*/
#include<stdio.h>
int main(void)
{
	int num , i  , j= 0; 
	printf("please enter your numbern\n");
	scanf("%d",&num);
	for(i = 0 ; i <32;i++)
	{
		if((num>>i)&1)
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

			
		