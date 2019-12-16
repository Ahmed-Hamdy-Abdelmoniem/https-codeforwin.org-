/*C program to find all roots of a quadratic equation using switch case*/
#include<stdio.h>
#include <math.h>
int main (void)
{
	float a ,b,c ,d,r1,r2,im ;
	printf("please enter a,b ,c");
	scanf("%f %f %f" ,&a ,&b ,&c);
	d = ((b*b)-(4*a*c));
	switch (d>0)
	{
		case 1 :
		r1 = (-b + sqrt((b*b)-(4*a*c)))/ (2*a);
		r2 = (-b - sqrt((b*b)-4*a*c))/ (2*a);
		printf("r1 is %f",r1);
		printf("r2 is %f",r2);
		break  ;
		default:
		r1 = -b / (2*a) ;
		im = sqrt((b*b)-4*a*c);
		printf("%f + %f",r1, im);
		printf("%f - %f",r1, im);
		break ; 
	}
	return 0 ; 
}

		
		