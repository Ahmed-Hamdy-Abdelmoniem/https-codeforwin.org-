/*C program to find all roots of a quadratic equation*/
#include<stdio.h>
#include <math.h>
int main (void)
{
	int a ,b,c;
	float root2 ,root1 ,sq; 
	printf("please enter a ,b ,c\n");
	scanf("%d %d %d",&a,&b,&c);
	sq = sqrt((b*b)-(4*a*c));
	root1 = (-b + ((sq)))/(2*a);
	root2 = (-b - ((sq)))/(2*a);
	printf("%f root1\n",root1);
	printf("%f root2\n",root2);
	return 0 ; 
}

	
	
	
	