/*7. Write a C program to get highest set bit of a number.
*/
#include<stdio.h>
int main(void)
{
	int num,i,j=300 ; 
	printf("please enter your number\n");
	scanf("%d",&num);
for(i = 0 ; i <32 ; i++)
{
	if((num>>i)&(1))
	{
		j = i ; 
	}
}
if(j ==300)
{
	printf("no ones");
}
else{
	printf("the hifges is  %d",j);
}
return 0 ; 
}

	
	
	