/*C program to check whether triangle is valid or not if angles are given*/
#include<stdio.h>
int main(void)
{
	int z,y,x; 
	printf("please enter your angles\n");
	scanf("%d %d %d",&x , &y ,&z);
	if((x+y+z) == 180 )
	{
		printf("valid triangle");
	}
	else 
	{
				printf("not valid triangle");
	}
	return 0 ; 
}


		
	