/*12. Write a C program to count total zeros and ones in a binary number.
*/
#include<stdio.h>
int main(void)
{
	int num,i,j=0,k=0 ; 
	printf("please enter your number");
	scanf("%d",&num);
	for(i = 0 ; i<32;i++)
	{
		if((num>>i)&1)
		{
			j ++ ;
		}
		else
		{
			k++;
		}
	}
	printf("number of ones is %d\n",j);
	printf("number of zeroes is %d",k);
	return 0 ; 
}
	
	