/*C program to print ASCII values of all characters*/
#include <stdio.h>
int main(void)
{
	unsigned int i;
    for(i = 0 ;i<256;i++)
	{
		printf("%d %c\n",i,i);
	}
     return 0 ;	
	
}