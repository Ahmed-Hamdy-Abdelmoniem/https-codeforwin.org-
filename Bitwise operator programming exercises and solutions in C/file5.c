/*5. Write a C program to clear nth bit of a number.
*/
#include<stdio.h>
int main(void)
{
	int num , n ; 
    printf("please enter yur number");
    scanf("%d",&num);
	printf("please enter yur bit");
    scanf("%d",&n);
	num &=~(1<<n);
    printf("your new number is %d",num);
    return 0 ; 
}
	
	
	