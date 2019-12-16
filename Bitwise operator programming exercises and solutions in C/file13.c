/*13. Write a C program to rotate bits of a given number.
*/
#include<stdio.h>
int main(void)
{
	int num ,right, left , num_rotate,temp=0,i; 
	printf("please enter your number");
	scanf("%d",&num);
	printf("please enternumber of rotation");
	scanf("%d",&num_rotate);
	num_rotate = num_rotate%31 ;
	right = num;
	left = num ;
	for(i = 0;i<num_rotate; i++)
	{
		//right
		temp = right&1;
		right = right>>1;
		right|=temp<<31;

		//left
		temp = left&(1<<31);
		left = left<<1;
		left|=temp;
	}
	printf("left %d\n",left);
	printf("right %d\n",right);
	return 0 ; 
}

	
	
